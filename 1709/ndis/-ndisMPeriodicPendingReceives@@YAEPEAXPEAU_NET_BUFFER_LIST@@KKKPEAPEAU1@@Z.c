/*
 * XREFs of ?ndisMPeriodicPendingReceives@@YAEPEAXPEAU_NET_BUFFER_LIST@@KKKPEAPEAU1@@Z @ 0x1C0068CB0
 * Callers:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C006A864 (ndisMQueueReceiveNetBufferLists.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMPeriodicPendingReceives(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *Alignment,
        int a3,
        unsigned int a4,
        char a5,
        struct _NET_BUFFER_LIST **a6)
{
  KSPIN_LOCK *v6; // rbp
  __int64 v7; // r14
  KIRQL v8; // r13
  struct _NET_BUFFER_LIST *v9; // r15
  bool v10; // si
  KSPIN_LOCK *v13; // rcx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _NET_BUFFER_LIST *i; // rax
  bool result; // al

  v6 = a1 + 398;
  v7 = a4;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v13 = a1 + 398;
  if ( (a5 & 1) != 0 )
    KeAcquireSpinLockAtDpcLevel(v13);
  else
    v8 = KeAcquireSpinLockRaiseToDpc(v13);
  a1[399] = KeGetCurrentThread();
  *((_DWORD *)a1 + 800) = 2493549;
  v14 = v7 + *((int *)a1 + 801);
  if ( *((_DWORD *)a1 + 794) == 1 && v14 < 0x3E8 )
  {
    *((_DWORD *)a1 + 814) += v7;
    v10 = 1;
    v15 = (_QWORD *)a1[403];
    if ( v15 )
      *v15 = Alignment;
    else
      a1[402] = Alignment;
    for ( i = Alignment; Alignment; Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment )
    {
      i = Alignment;
      LODWORD(Alignment->ProtocolReserved[0]) = a3;
    }
    *((_DWORD *)a1 + 811) += v7;
    *((_DWORD *)a1 + 801) += v7;
    a1[403] = i;
  }
  else
  {
    if ( !HIDWORD(v14) )
      v10 = (unsigned int)v14 >= 0x3E8;
    v9 = Alignment;
  }
  a1[399] = 0LL;
  *((_DWORD *)a1 + 800) = 0;
  if ( (a5 & 1) != 0 )
    KeReleaseSpinLockFromDpcLevel(v6);
  else
    KeReleaseSpinLock(v6, v8);
  result = v10;
  *a6 = v9;
  return result;
}

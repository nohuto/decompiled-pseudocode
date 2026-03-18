/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x1407560B0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiDeleteCloneDescriptor @ 0x1400ADA5C (MiDeleteCloneDescriptor.c)
 *     MiDeleteCloneZombies @ 0x1400C9564 (MiDeleteCloneZombies.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeleteInsertedCloneVads(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v3; // rax
  _QWORD *i; // rbx
  _QWORD **v5; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  unsigned int *v9; // rcx
  _QWORD *j; // rax
  _QWORD **v11; // rcx
  _QWORD *v12; // rax
  _QWORD *k; // rcx
  _BYTE v15[48]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v15);
  *(_BYTE *)(*(_QWORD *)(a1 + 1296) + 321LL) |= 1u;
  v3 = *(_QWORD **)(a1 + 1576);
  i = 0LL;
  while ( v3 )
  {
    i = v3;
    v3 = (_QWORD *)*v3;
  }
  while ( i )
  {
    v5 = (_QWORD **)i[1];
    v6 = (__int64)i;
    v7 = i;
    if ( v5 )
    {
      v8 = *v5;
      for ( i = (_QWORD *)i[1]; v8; v8 = (_QWORD *)*v8 )
        i = v8;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v7 )
          break;
        v7 = i;
      }
    }
    MiLockVad((__int64)CurrentThread, v6);
    MiReferenceVad(v6);
    MiDeleteVad(v9, 0LL, 0);
  }
  for ( j = *(_QWORD **)(a1 + 912); j; j = (_QWORD *)*j )
    i = j;
  while ( i )
  {
    i[6] = 0LL;
    MiDeleteCloneDescriptor(a1, (__int64)i);
    v11 = (_QWORD **)i[1];
    v12 = i;
    if ( v11 )
    {
      i = (_QWORD *)i[1];
      for ( k = *v11; k; k = (_QWORD *)*k )
        i = k;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v12 )
          break;
        v12 = i;
      }
    }
  }
  MiDeleteCloneZombies(a1, 0);
  return KiUnstackDetachProcess((__int64)v15, 0LL);
}

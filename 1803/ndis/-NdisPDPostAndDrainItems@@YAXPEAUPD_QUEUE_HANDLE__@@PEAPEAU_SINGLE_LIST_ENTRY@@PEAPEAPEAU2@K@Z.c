/*
 * XREFs of ?NdisPDPostAndDrainItems@@YAXPEAUPD_QUEUE_HANDLE__@@PEAPEAU_SINGLE_LIST_ENTRY@@PEAPEAPEAU2@K@Z @ 0x1C00767D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisPDPostAndDrainItems(
        struct PD_QUEUE_HANDLE__ *a1,
        struct _SINGLE_LIST_ENTRY **a2,
        struct _SINGLE_LIST_ENTRY ***a3,
        unsigned int a4)
{
  struct _SINGLE_LIST_ENTRY *v4; // rsi
  struct _SINGLE_LIST_ENTRY **p_Next; // rdi
  int v6; // ebp
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  struct _SINGLE_LIST_ENTRY *v15; // rcx
  __int64 v16; // rax
  struct _SINGLE_LIST_ENTRY *v17; // rcx
  struct _SINGLE_LIST_ENTRY *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a2;
  p_Next = &v18;
  v6 = *((_DWORD *)a1 + 13);
  v18 = 0LL;
  v10 = *((_DWORD *)a1 + 15);
  v11 = *((_DWORD *)a1 + 16);
  if ( (v6 & (*((_DWORD *)a1 + 33) - v10)) < a4 )
    a4 = v6 & (*((_DWORD *)a1 + 33) - v10);
  v12 = a4 + (v6 & (*((_DWORD *)a1 + 15) - v11 - 1));
  while ( v4 && v12 )
  {
    v13 = v11;
    --v12;
    v11 = v6 & (v11 + 1);
    *((_QWORD *)a1 + v13 + 24) = v4;
    v4 = v4->Next;
    if ( v11 == v10 )
    {
      v14 = v10;
      v10 = v6 & (v10 + 1);
      --a4;
      v15 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + v14 + 24);
      *p_Next = v15;
      p_Next = &v15->Next;
    }
  }
  for ( ; a4; --a4 )
  {
    v16 = v10;
    v10 = v6 & (v10 + 1);
    v17 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + v16 + 24);
    *p_Next = v17;
    p_Next = &v17->Next;
  }
  *((_DWORD *)a1 + 16) = v11;
  *((_DWORD *)a1 + 15) = v10;
  if ( *((_QWORD *)a1 + 5) && _InterlockedCompareExchange((volatile signed __int32 *)a1 + 14, 0, 1) == 1 )
  {
    if ( (unsigned __int8)byte_1C0099624 >= 5u )
      WPP_SF_q(0x64u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)a1);
    KeSetEvent(*((PRKEVENT *)a1 + 5), 2, 0);
  }
  *a2 = v4;
  if ( v18 )
  {
    *p_Next = 0LL;
    **a3 = v18;
    *a3 = p_Next;
  }
}

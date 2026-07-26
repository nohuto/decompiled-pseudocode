/*
 * XREFs of ?NdisPDCompleteFetchedItems@@YAXPEAUPD_QUEUE_HANDLE__@@K@Z @ 0x1C0076430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisPDCompleteFetchedItems(struct PD_QUEUE_HANDLE__ *a1, unsigned int a2)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // eax

  v3 = *((_DWORD *)a1 + 33);
  v4 = *((_DWORD *)a1 + 13);
  v5 = v4 & (*((_DWORD *)a1 + 34) - v3);
  if ( a2 < v5 )
    v5 = a2;
  *((_DWORD *)a1 + 33) = v4 & (v3 + v5);
  if ( *((_QWORD *)a1 + 4) && _InterlockedCompareExchange((volatile signed __int32 *)a1 + 32, 0, 1) == 1 )
  {
    if ( (unsigned __int8)byte_1C0099624 >= 5u )
      WPP_SF_q(0x63u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)a1);
    KeSetEvent(*((PRKEVENT *)a1 + 4), 2, 0);
  }
}

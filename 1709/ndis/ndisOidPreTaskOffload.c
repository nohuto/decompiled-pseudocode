/*
 * XREFs of ndisOidPreTaskOffload @ 0x1C00DCE40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     ndisPreTaskOffloadQuery @ 0x1C0046A58 (ndisPreTaskOffloadQuery.c)
 *     ndisAllocateOpenOffload @ 0x1C00C39C0 (ndisAllocateOpenOffload.c)
 *     ndisPreTaskOffloadSet @ 0x1C00DD518 (ndisPreTaskOffloadSet.c)
 */

unsigned __int8 __fastcall ndisOidPreTaskOffload(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int8 v5; // di
  int OpenOffload; // eax
  int v7; // ecx
  int v8; // ecx
  char v9; // al
  __int64 v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0xE0u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v4, v3);
  *(_DWORD *)(a1 + 40) = -1073741637;
  v5 = 1;
  if ( (*(_DWORD *)(v3 + 88) & 0x20) != 0 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 16) + 4120LL) )
      goto LABEL_8;
    if ( !*(_QWORD *)(v4 + 792) )
    {
      OpenOffload = ndisAllocateOpenOffload(v4);
      *(_DWORD *)(a1 + 40) = OpenOffload;
      if ( OpenOffload )
      {
        *(_DWORD *)(a1 + 40) = -1073741670;
        goto LABEL_14;
      }
    }
  }
  v7 = *(_DWORD *)(v3 + 4);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v9 = ndisPreTaskOffloadSet(a1);
      goto LABEL_13;
    }
    if ( v8 != 1 )
    {
LABEL_8:
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_14;
    }
  }
  v9 = ndisPreTaskOffloadQuery(v4, a1);
LABEL_13:
  v5 = v9;
LABEL_14:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v12 = *(_DWORD *)(a1 + 40);
    LODWORD(v11) = v5;
    WPP_SF_qqDD(0xE1u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v4, v11, v12);
  }
  return v5;
}

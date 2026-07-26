/*
 * XREFs of ndisOidPostMaxLookahead @ 0x1C00458D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostMaxLookahead(_DWORD *a1)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)a1 + 4);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x56u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, *(_QWORD *)a1, v1);
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    a1[10] = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      a1[10] = -1073676268;
    }
    if ( !a1[10] )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 596LL) = **(_DWORD **)(v1 + 40);
      *(_DWORD *)(v1 + 52) = 4;
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x57u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, *(_QWORD *)a1, v1);
}

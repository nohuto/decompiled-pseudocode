/*
 * XREFs of ?AllocatePeer@dataproviderBamoConnection@@MEAAJPEAPEAVdataproviderBamoPeer@@@Z @ 0x180153310
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall dataproviderBamoConnection::AllocatePeer(
        dataproviderBamoConnection *this,
        struct dataproviderBamoPeer **a2)
{
  _DWORD *v3; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = operator new(0x48uLL);
  if ( v3 )
  {
    *(_QWORD *)v3 = &dataproviderBamoPeer::`vftable';
    v3[4] = 1;
    *((_QWORD *)v3 + 3) = v3;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    v3[12] = 0;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 1) = &BamoImpl::dataproviderBamoPeerImpl::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a2 = (struct dataproviderBamoPeer *)v3;
  if ( !v3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCBF,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.h",
      v4);
    __debugbreak();
  }
  return 0LL;
}

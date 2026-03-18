/*
 * XREFs of ?AllocateStub@BamoDataProviderRegistrarPrincipal@@MEAAJPEAVBamoPeer@Bamo@Microsoft@@PEAPEAVBamoDataProviderRegistrarStub@@@Z @ 0x1801684E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::AllocateStub(
        BamoDataProviderRegistrarPrincipal *this,
        struct Microsoft::Bamo::BamoPeer *a2,
        struct BamoDataProviderRegistrarStub **a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x50uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x50uLL);
    *v5 = &BamoDataProviderRegistrarStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
    v5[1] = &BamoDataProviderRegistrarStub::`vftable'{for `IDataProviderRegistrarStub'};
    *((_DWORD *)v5 + 8) = 0;
    v5[5] = 0LL;
    *((_DWORD *)v5 + 6) = 1;
    *((_BYTE *)v5 + 48) = 0;
    v5[7] = 0LL;
    v5[8] = 0LL;
    v5[9] = 0LL;
    v5[2] = &BamoImpl::BamoDataProviderRegistrarStubImpl::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  *a3 = (struct BamoDataProviderRegistrarStub *)v5;
  if ( v5 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D4,
    (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.h",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}

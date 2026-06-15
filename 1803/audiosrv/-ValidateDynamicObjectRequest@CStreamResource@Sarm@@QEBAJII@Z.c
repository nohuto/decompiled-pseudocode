/*
 * XREFs of ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x1800F7924
 * Callers:
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1800F38E0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1800F7498 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::ValidateDynamicObjectRequest(
        Sarm::CStreamResource *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 17);
  if ( a2 > v3 )
  {
    v4 = 233LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( a3 > v3 )
  {
    v4 = 236LL;
    goto LABEL_3;
  }
  return 0LL;
}

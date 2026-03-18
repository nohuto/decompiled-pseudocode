/*
 * XREFs of ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C014797C
 * Callers:
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C014502C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C000A498 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000BC94 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::Create(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CSystemChannel **a2)
{
  DirectComposition::CApplicationChannel *v4; // rax
  DirectComposition::CApplicationChannel *v5; // rbx
  signed int v6; // edi

  v4 = (DirectComposition::CApplicationChannel *)Win32AllocPoolZInit(0x310uLL, 0x63734344u);
  v5 = v4;
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::CApplicationChannel(v4, a1, 0, 0);
    *((_QWORD *)v5 + 2) = 0LL;
    *(_QWORD *)v5 = &DirectComposition::CSystemChannel::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 == 0LL ? 0xC0000017 : 0;
  if ( v5 )
  {
    v6 = DirectComposition::CApplicationChannel::Initialize(v5, 0LL, 0LL);
    if ( v6 < 0 )
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
    else
      *a2 = v5;
  }
  return (unsigned int)v6;
}

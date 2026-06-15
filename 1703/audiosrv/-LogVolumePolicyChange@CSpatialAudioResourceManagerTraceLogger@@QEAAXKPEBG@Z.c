/*
 * XREFs of ?LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z @ 0x1800C7154
 * Callers:
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x1800C3760 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogVolumePolicyChange(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        const unsigned __int16 *a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  UINT32 cData; // r10d
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+70h] [rbp-28h] BYREF

  if ( (unsigned int)dword_18012A220 > 5 )
  {
    v6 = a2;
    v8 = &v6;
    v9 = 4;
    v10 = 0;
    TlgCreateWsz(&v11, a3);
    TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FAE19, v3, v4, cData, &pData);
  }
}

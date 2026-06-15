/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x1800164E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CProcess::GetEndpointVolumeOverridePolicyVolume(CProcess *this, const unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  float v4; // xmm6_4
  double v5; // xmm0_8
  struct TSSession *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 51);
  v4 = FLOAT_1_0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(v2, 1, 0LL, &v7) )
  {
    v5 = (*(double (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)v7 + 30) + 24LL))(
           *((_QWORD *)v7 + 30),
           a2);
    v4 = *(float *)&v5;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v4;
}

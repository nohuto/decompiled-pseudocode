/*
 * XREFs of ?StartMultiWriteOperation@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x1800D1190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::StartMultiWriteOperation(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 result; // rax

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v1 )
    LeaveCriticalSection(v1);
  result = 0LL;
  *((_DWORD *)this + 26) = 1;
  return result;
}

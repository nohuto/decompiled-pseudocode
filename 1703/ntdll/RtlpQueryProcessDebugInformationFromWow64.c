/*
 * XREFs of RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D9E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateQueryDebugBuffer @ 0x180056140 (RtlCreateQueryDebugBuffer.c)
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800686C0 (RtlDestroyQueryDebugBuffer.c)
 */

__int64 __fastcall RtlpQueryProcessDebugInformationFromWow64(ULONG Flags, unsigned int *a2)
{
  PRTL_DEBUG_INFORMATION QueryDebugBuffer; // rax
  PRTL_DEBUG_INFORMATION v6; // rbx
  NTSTATUS ProcessDebugInformation; // edi
  __int64 v8; // rsi

  if ( ((Flags - 1024) & 0xFFFFFBFF) != 0 )
    return 3221225485LL;
  QueryDebugBuffer = RtlCreateQueryDebugBuffer(0, 0);
  v6 = QueryDebugBuffer;
  if ( QueryDebugBuffer )
  {
    v8 = *((_QWORD *)a2 + 1);
    QueryDebugBuffer->CriticalSectionHandle = (HANDLE)*(unsigned int *)(v8 + 80);
    ProcessDebugInformation = RtlQueryProcessDebugInformation((HANDLE)*a2, Flags, QueryDebugBuffer);
    if ( ProcessDebugInformation >= 0 )
    {
      *(_DWORD *)(v8 + 80) = v6->CriticalSectionHandle;
      *(_DWORD *)(v8 + 84) = v6->CriticalSectionOwnerThread;
    }
    RtlDestroyQueryDebugBuffer(v6);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)ProcessDebugInformation;
}

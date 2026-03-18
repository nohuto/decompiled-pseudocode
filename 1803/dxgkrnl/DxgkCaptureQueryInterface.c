/*
 * XREFs of DxgkCaptureQueryInterface @ 0x1C016E750
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C00DB490 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCaptureQueryInterface(unsigned __int16 *a1, _DWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rax

  if ( *a1 == 48 && a1[1] == 1 )
  {
    *((_QWORD *)a1 + 1) = 0LL;
    *((_QWORD *)a1 + 2) = DxgkCddInterfaceDereference;
    *((_QWORD *)a1 + 3) = DxgkCddInterfaceDereference;
    *((_QWORD *)a1 + 4) = DxgkCaptureAcquireSynchronization;
    *((_QWORD *)a1 + 5) = DxgkCaptureReleaseSynchronization;
    result = 0LL;
    *a2 = 48;
  }
  else
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(48LL);
    v4[3] = -1073741811LL;
    v4[4] = *a1;
    v4[5] = 528LL;
    v4[6] = a1[1];
    v4[7] = 1LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  return result;
}

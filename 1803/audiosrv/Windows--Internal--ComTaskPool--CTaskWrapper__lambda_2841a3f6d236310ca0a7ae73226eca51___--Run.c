/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run @ 0x1800154F0
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z @ 0x180026870 (-PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = AtmosCheck::PerformLicenseCheckInternal(*(AtmosCheck **)(a1 + 16), *(struct DolbyLicenseResult **)(a1 + 24));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}

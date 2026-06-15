/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9888ee29221e6d6bd53d80d31d373ecc___::Run @ 0x180057D10
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEA_N00@Z @ 0x180026290 (-PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEA_N00@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9888ee29221e6d6bd53d80d31d373ecc___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = AtmosCheck::PerformLicenseCheckInternal(
             *(AtmosCheck **)(a1 + 16),
             *(bool **)(a1 + 24),
             *(bool **)(a1 + 32),
             *(bool **)(a1 + 40));
  **(_DWORD **)(a1 + 48) = result;
  return result;
}

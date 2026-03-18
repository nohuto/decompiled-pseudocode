/*
 * XREFs of ?WaitForMarshalingCompletion@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C004FF74
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C004FB80 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z @ 0x1C012CC70 (-ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CRIMBase::WaitForMarshalingCompletion(__int64 a1, unsigned int a2)
{
  NTSTATUS result; // eax
  void *v3; // rcx

  result = a2;
  v3 = *(void **)(a1 + 40LL * a2 + 184);
  if ( v3 )
    return KeWaitForSingleObject(v3, WrUserRequest, 0, 0, 0LL);
  return result;
}

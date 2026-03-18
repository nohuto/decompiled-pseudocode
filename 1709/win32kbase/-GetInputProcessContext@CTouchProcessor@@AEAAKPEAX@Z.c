/*
 * XREFs of ?GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z @ 0x1C00AA6B4
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C01283B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall CTouchProcessor::GetInputProcessContext(CTouchProcessor *this, unsigned __int64 a2, __int64 a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this, a2, a3);
  LOBYTE(v5) = 19;
  v6 = *(_DWORD *)(CurrentProcessWin32Process + 56);
  v9 = HMValidateHandleNoSecure(a2, v5, v7, v8);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 472);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 276) & 0x20) != 0 )
      {
        v11 = *(_QWORD *)(v9 + 376);
        if ( v11 )
          return *(unsigned int *)(v11 + 84);
      }
    }
  }
  return v6;
}

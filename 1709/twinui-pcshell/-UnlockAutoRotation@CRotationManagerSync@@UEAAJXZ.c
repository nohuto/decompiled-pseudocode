/*
 * XREFs of ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18003AF20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Ld @ 0x18003A7BC (WPP_SF_Ld.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18003B3E0 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 */

__int64 __fastcall CRotationManagerSync::UnlockAutoRotation(CRotationManagerSync *this)
{
  PSRWLOCK v1; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // esi
  int v5; // ecx
  char v6; // al
  ORIENTATION_PREFERENCE v7; // ecx
  unsigned int v8; // edx

  v1 = CApplicationManagerUtility::g_pIAMGlobals;
  CurrentThreadId = GetCurrentThreadId();
  v4 = CurrentThreadId != LODWORD(v1[9].Ptr) ? 0x80070005 : 0;
  if ( LODWORD(v1[9].Ptr) == CurrentThreadId )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v5 = *((_DWORD *)this + 10);
    v4 = v5 != 0 ? 1 : -2147023728;
    if ( v5 )
    {
      v6 = v5 - 1;
      *((_DWORD *)this + 10) = v5 - 1;
      if ( v5 == 1 )
      {
        v7 = *((_DWORD *)this + 8);
        if ( *((_DWORD *)this + 5) != v7 )
        {
          *((_DWORD *)this + 5) = v7;
          *((_BYTE *)this + 24) = v6;
          if ( *((_BYTE *)this + 25) == v6 )
          {
            SetDisplayAutoRotationPreferences(v7);
            *((_BYTE *)this + 24) = 1;
          }
        }
        v8 = *((_DWORD *)this + 7);
        if ( *((_DWORD *)this + 4) != v8 )
        {
          CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 88), v8);
          *((_DWORD *)this + 4) = *((_DWORD *)this + 7);
        }
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xBu,
            &WPP_24454defdb0f3441f616e5b42592bcbb_Traceguids,
            *((_DWORD *)this + 8),
            *((_DWORD *)this + 4));
        v4 = 0;
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  return v4;
}

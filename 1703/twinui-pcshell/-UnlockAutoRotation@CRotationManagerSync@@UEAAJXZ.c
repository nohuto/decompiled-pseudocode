/*
 * XREFs of ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x180039AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Ld @ 0x1800392C0 (WPP_SF_Ld.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180039FA0 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 */

__int64 __fastcall CRotationManagerSync::UnlockAutoRotation(CRotationManagerSync *this)
{
  PSRWLOCK v1; // rbx
  int v3; // ebx
  int v4; // ecx
  char v5; // al
  ORIENTATION_PREFERENCE v6; // ecx
  unsigned int v7; // edx

  v1 = CApplicationManagerUtility::g_pIAMGlobals;
  v3 = GetCurrentThreadId() != LODWORD(v1[9].Ptr) ? 0x80070005 : 0;
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = *((_DWORD *)this + 10);
    v3 = v4 != 0 ? 1 : -2147023728;
    if ( v4 )
    {
      v5 = v4 - 1;
      *((_DWORD *)this + 10) = v4 - 1;
      if ( v4 == 1 )
      {
        v6 = *((_DWORD *)this + 8);
        if ( *((_DWORD *)this + 5) != v6 )
        {
          *((_DWORD *)this + 5) = v6;
          *((_BYTE *)this + 24) = v5;
          if ( *((_BYTE *)this + 25) == v5 )
          {
            SetDisplayAutoRotationPreferences(v6);
            *((_BYTE *)this + 24) = 1;
          }
        }
        v7 = *((_DWORD *)this + 7);
        if ( *((_DWORD *)this + 4) != v7 )
        {
          CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 64), v7);
          *((_DWORD *)this + 4) = *((_DWORD *)this + 7);
        }
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xBu,
            &WPP_24454defdb0f3441f616e5b42592bcbb_Traceguids,
            *((_DWORD *)this + 8),
            *((_DWORD *)this + 4));
        v3 = 0;
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  return (unsigned int)v3;
}

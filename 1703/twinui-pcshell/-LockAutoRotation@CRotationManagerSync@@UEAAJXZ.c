/*
 * XREFs of ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1800399C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dL @ 0x180039304 (WPP_SF_dL.c)
 *     ?_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180039E30 (-_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PRE.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180039FA0 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 */

__int64 __fastcall CRotationManagerSync::LockAutoRotation(CRotationManagerSync *this)
{
  PSRWLOCK v1; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // esi
  __int64 v5; // r8
  ORIENTATION_PREFERENCE v6; // ebx
  unsigned int OrientationPreferenceFromCurrentOrientation; // eax
  int v8; // eax
  bool v9; // zf
  __int64 Ptr_high; // rdx
  ORIENTATION_PREFERENCE v12; // [rsp+20h] [rbp-18h]
  ORIENTATION_PREFERENCE v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = CApplicationManagerUtility::g_pIAMGlobals;
  CurrentThreadId = GetCurrentThreadId();
  v4 = CurrentThreadId != LODWORD(v1[9].Ptr) ? 0x80070005 : 0;
  if ( CurrentThreadId == LODWORD(v1[9].Ptr) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v6 = ORIENTATION_PREFERENCE_NONE;
    v13 = ORIENTATION_PREFERENCE_NONE;
    if ( !*((_DWORD *)this + 10) )
    {
      OrientationPreferenceFromCurrentOrientation = CRotationManagerSync::_GetOrientationPreferenceFromCurrentOrientation(
                                                      (CRotationManagerSync *)((char *)this - 64),
                                                      &v13);
      v6 = v13;
      v4 = OrientationPreferenceFromCurrentOrientation;
    }
    if ( ++*((_DWORD *)this + 10) == 1 )
    {
      v8 = *((_DWORD *)this + 6);
      *(_QWORD *)((char *)this + 28) = *((_QWORD *)this + 2);
      *((_DWORD *)this + 9) = v8;
      *((_BYTE *)this + 37) = 1;
      if ( v6 != *((_DWORD *)this + 5) || !(_BYTE)v8 )
      {
        v9 = *((_BYTE *)this + 25) == 0;
        *((_DWORD *)this + 5) = v6;
        *((_BYTE *)this + 24) = 0;
        if ( v9 )
        {
          SetDisplayAutoRotationPreferences(v6);
          *((_BYTE *)this + 24) = 1;
        }
      }
      Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[9].Ptr);
      if ( (_DWORD)Ptr_high != *((_DWORD *)this + 4) )
      {
        CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 64), Ptr_high);
        *((_DWORD *)this + 4) = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[9].Ptr);
      }
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v12 = v6;
        WPP_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 2), Ptr_high, v5, *((_DWORD *)this + 7), v12);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  return v4;
}

/*
 * XREFs of ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0053010
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C00530A0 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00530F4 (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00856D4 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C008742C (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C005312C (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(CIT_USER_ACTIVE_TRACKER *this, unsigned int a2)
{
  unsigned __int64 v2; // r11
  CIT_USER_ACTIVE_TRACKER *v3; // r10
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax

  LODWORD(v2) = a2;
  v3 = this;
  if ( (dword_1C018C17C & 1) != 0 )
  {
    v4 = dword_1C018C180;
  }
  else
  {
    v4 = dword_1C018E890;
    dword_1C018C17C |= 1u;
    dword_1C018C180 = dword_1C018E890;
  }
  v5 = *((_DWORD *)this + 2);
  v6 = a2 - v5;
  if ( a2 != v5 )
  {
    if ( a2 < v5 )
    {
      v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v6 = v2 - *((_DWORD *)v3 + 2);
      if ( (unsigned int)v2 < *((_DWORD *)v3 + 2) )
      {
        v10 = -1;
        if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                              - qword_1C018E908) <= 0xFFFFFFFF )
          v10 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - qword_1C018E908;
        if ( v6 > v10 || v6 > 0x240C8400 )
        {
          ++*((_DWORD *)v3 + 3);
          *((_DWORD *)v3 + 2) = v2;
          *((_DWORD *)v3 + 1) = v2 - dword_1C018C180;
          CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)v3 + 16), 0);
          return;
        }
      }
      v4 = dword_1C018C180;
    }
    if ( *(_DWORD *)v3 )
    {
      *((_DWORD *)v3 + 4) += v6;
    }
    else
    {
      v7 = *((_DWORD *)v3 + 1);
      v8 = *((_DWORD *)v3 + 2) - v7;
      if ( v8 < v4 )
      {
        if ( (int)v2 - v7 > v4 )
        {
          v9 = v4 - v8;
          CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)v3 + 16), 0);
        }
        else
        {
          v9 = v6;
        }
        *((_DWORD *)v3 + 4) += v9;
      }
    }
    *((_DWORD *)v3 + 2) = v2;
  }
}

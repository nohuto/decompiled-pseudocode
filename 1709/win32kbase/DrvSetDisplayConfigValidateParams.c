/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1C00ABC7C
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00FA088 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C0063EAC (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck@@YAHXZ @ 0x1C006719C (-Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C006745C (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     UserIsConsoleConnection @ 0x1C009BC80 (UserIsConsoleConnection.c)
 *     _stricmp @ 0x1C00A76A4 (_stricmp.c)
 *     ?IsCurrentProcessDispBroker@@YA_NXZ @ 0x1C00DC0C4 (-IsCurrentProcessDispBroker@@YA_NXZ.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00F8BC0 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00F8D70 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-1F8h]
  int TargetVirtualization; // [rsp+30h] [rbp-1F8h]
  char *v23; // [rsp+38h] [rbp-1F0h]
  unsigned __int8 v24; // [rsp+40h] [rbp-1E8h] BYREF
  char v25; // [rsp+41h] [rbp-1E7h]
  unsigned int i; // [rsp+44h] [rbp-1E4h]
  unsigned __int8 v27[4]; // [rsp+48h] [rbp-1E0h] BYREF
  unsigned int j; // [rsp+4Ch] [rbp-1DCh]
  char v29; // [rsp+50h] [rbp-1D8h]
  char v30; // [rsp+53h] [rbp-1D5h]
  char v31; // [rsp+54h] [rbp-1D4h]
  char v32; // [rsp+55h] [rbp-1D3h]
  char v33; // [rsp+56h] [rbp-1D2h]
  char v34; // [rsp+57h] [rbp-1D1h]
  char v35; // [rsp+58h] [rbp-1D0h]
  char v36; // [rsp+59h] [rbp-1CFh]
  char v37; // [rsp+5Ah] [rbp-1CEh]
  char v38; // [rsp+5Bh] [rbp-1CDh]
  char v39; // [rsp+5Ch] [rbp-1CCh]
  char v40; // [rsp+5Dh] [rbp-1CBh]
  char v41; // [rsp+5Eh] [rbp-1CAh]
  char v42; // [rsp+5Fh] [rbp-1C9h]
  char v43; // [rsp+60h] [rbp-1C8h]
  char v44; // [rsp+61h] [rbp-1C7h]
  char v45; // [rsp+62h] [rbp-1C6h]
  char v46; // [rsp+63h] [rbp-1C5h]
  char v47; // [rsp+64h] [rbp-1C4h]
  char v48; // [rsp+65h] [rbp-1C3h]
  char v49; // [rsp+66h] [rbp-1C2h]
  char v50; // [rsp+67h] [rbp-1C1h]
  char v51; // [rsp+68h] [rbp-1C0h]
  char v52; // [rsp+69h] [rbp-1BFh]
  char v53; // [rsp+6Ah] [rbp-1BEh]
  char v54; // [rsp+6Bh] [rbp-1BDh]
  char v55; // [rsp+6Ch] [rbp-1BCh]
  char v56; // [rsp+6Dh] [rbp-1BBh]
  char v57; // [rsp+6Eh] [rbp-1BAh]
  char v58; // [rsp+6Fh] [rbp-1B9h]
  char v59; // [rsp+70h] [rbp-1B8h]
  char v60; // [rsp+71h] [rbp-1B7h]
  char v61; // [rsp+72h] [rbp-1B6h]
  char v62; // [rsp+73h] [rbp-1B5h]
  char v63; // [rsp+74h] [rbp-1B4h]
  char v64; // [rsp+75h] [rbp-1B3h]
  char v65; // [rsp+76h] [rbp-1B2h]
  char v66; // [rsp+77h] [rbp-1B1h]
  char v67; // [rsp+78h] [rbp-1B0h]
  char v68; // [rsp+79h] [rbp-1AFh]
  char v69; // [rsp+7Ah] [rbp-1AEh]
  char v70; // [rsp+7Bh] [rbp-1ADh]
  char v71; // [rsp+7Ch] [rbp-1ACh]
  char v72; // [rsp+7Dh] [rbp-1ABh]
  char v73; // [rsp+7Eh] [rbp-1AAh]
  char v74; // [rsp+7Fh] [rbp-1A9h]
  int v75; // [rsp+80h] [rbp-1A8h]
  int v76; // [rsp+84h] [rbp-1A4h]
  int v77; // [rsp+88h] [rbp-1A0h]
  _QWORD *v78; // [rsp+90h] [rbp-198h]
  _QWORD *v79; // [rsp+98h] [rbp-190h]
  _QWORD *v80; // [rsp+A0h] [rbp-188h]
  _QWORD *v81; // [rsp+A8h] [rbp-180h]
  __int64 v82; // [rsp+B0h] [rbp-178h]
  __int64 v83; // [rsp+B8h] [rbp-170h]
  __int64 v84; // [rsp+C0h] [rbp-168h]
  __int64 v85; // [rsp+C8h] [rbp-160h]
  __int64 v86; // [rsp+D0h] [rbp-158h]
  __int64 v87; // [rsp+D8h] [rbp-150h]
  __int64 v88; // [rsp+E0h] [rbp-148h]
  __int64 v89; // [rsp+E8h] [rbp-140h]
  __int64 v90; // [rsp+F0h] [rbp-138h]
  __int64 v91; // [rsp+F8h] [rbp-130h]
  __int64 v92; // [rsp+100h] [rbp-128h]
  __int64 v93; // [rsp+108h] [rbp-120h]
  __int64 v94; // [rsp+110h] [rbp-118h]
  __int64 v95; // [rsp+118h] [rbp-110h]
  __int64 v96; // [rsp+120h] [rbp-108h]
  __int64 v97; // [rsp+128h] [rbp-100h]
  __int64 v98; // [rsp+130h] [rbp-F8h]
  __int64 v99; // [rsp+138h] [rbp-F0h]
  __int64 v100; // [rsp+140h] [rbp-E8h]
  __int64 v101; // [rsp+148h] [rbp-E0h]
  __int64 v102; // [rsp+150h] [rbp-D8h]
  __int64 v103; // [rsp+158h] [rbp-D0h]
  __int64 v104; // [rsp+160h] [rbp-C8h]
  __int64 v105; // [rsp+168h] [rbp-C0h]
  __int64 v106; // [rsp+170h] [rbp-B8h]
  __int64 v107; // [rsp+178h] [rbp-B0h]
  __int64 v108; // [rsp+180h] [rbp-A8h]
  __int64 v109; // [rsp+188h] [rbp-A0h]
  __int64 v110; // [rsp+190h] [rbp-98h]
  __int64 v111; // [rsp+198h] [rbp-90h]
  __int64 v112; // [rsp+1A0h] [rbp-88h]
  __int64 v113; // [rsp+1A8h] [rbp-80h]
  __int64 v114; // [rsp+1B0h] [rbp-78h]
  __int64 v115; // [rsp+1C8h] [rbp-60h]
  char *Str1; // [rsp+1D0h] [rbp-58h]
  __int64 v117; // [rsp+1D8h] [rbp-50h]
  __int64 v118; // [rsp+1E0h] [rbp-48h]
  __int64 v119; // [rsp+1E8h] [rbp-40h]
  __int64 v120; // [rsp+1F0h] [rbp-38h]
  __int64 v121; // [rsp+1F8h] [rbp-30h]
  __int64 v122; // [rsp+200h] [rbp-28h]
  __int64 v123; // [rsp+208h] [rbp-20h]
  __int64 v124; // [rsp+210h] [rbp-18h]
  unsigned int v125; // [rsp+230h] [rbp+8h]
  unsigned int v127; // [rsp+240h] [rbp+18h]
  int v128; // [rsp+248h] [rbp+20h]

  v128 = a4;
  v127 = a3;
  v125 = a1;
  if ( a5 )
  {
    if ( (a3 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      v113 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v113 + 24) = -1073741790LL;
      v74 = WdLogEvent5_WdError(v113);
      return 3221225506LL;
    }
    if ( (v127 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      v114 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v114 + 24) = -1073741790LL;
      v29 = WdLogEvent5_WdError(v114);
      return 3221225506LL;
    }
  }
  if ( (v127 & 0x10000) != 0 )
  {
    Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck();
    v115 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v115 + 24) = -1073741637LL;
    v30 = WdLogEvent5_WdError(v115);
    return 3221225659LL;
  }
  if ( (v127 & 0xC0000000) != 0 )
  {
    if ( (v127 & 0x80) != 0 )
    {
      if ( v127 == 1073741952 || v127 == -2147483520 )
      {
        CurrentProcess = PsGetCurrentProcess(a1, a2);
        Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
        if ( gbBypassPresenterViewProcessCheck || Str1 && !stricmp(Str1, "explorer.exe") )
        {
          if ( v125 || a2 )
          {
            v117 = WdLogNewEntry5_WdError(v11, v10, v12);
            *(_QWORD *)(v117 + 24) = -1073741811LL;
            v34 = WdLogEvent5_WdError(v117);
            return 3221225485LL;
          }
          else
          {
            v118 = WdLogNewEntry5_WdTrace(v11);
            *(_QWORD *)(v118 + 24) = v127;
            v35 = WdLogEvent5_WdTrace(v118);
            return 0LL;
          }
        }
        else
        {
          v84 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v84 + 24) = v127;
          *(_QWORD *)(v84 + 32) = -1073741581LL;
          v33 = WdLogEvent5_WdError(v84);
          return 3221225715LL;
        }
      }
      else
      {
        v83 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v83 + 24) = v127;
        *(_QWORD *)(v83 + 32) = -1073741581LL;
        v32 = WdLogEvent5_WdError(v83);
        return 3221225715LL;
      }
    }
    else
    {
      v82 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v82 + 24) = v127;
      *(_QWORD *)(v82 + 32) = -1073741581LL;
      v31 = WdLogEvent5_WdError(v82);
      return 3221225715LL;
    }
  }
  else if ( (v128 & 1) != 0 )
  {
    if ( v128 == 1 && v127 == 128 && !v125 )
    {
      return 0LL;
    }
    else
    {
      v85 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v85 + 24) = v127;
      *(_QWORD *)(v85 + 32) = -1073741581LL;
      v36 = WdLogEvent5_WdAssertion(v85);
      return 3221225715LL;
    }
  }
  else
  {
    if ( ((v128 & 2) != 0 || (v128 & 4) != 0) && (v127 & 0x88F) != 0x88F )
    {
      v86 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v86 + 24) = v127;
      *(_QWORD *)(v86 + 32) = -1073741581LL;
      v37 = WdLogEvent5_WdAssertion(v86);
      return 3221225715LL;
    }
    if ( (v128 & 0x10) != 0 && (v128 & 8) == 0 )
    {
      v87 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v87 + 24) = v127;
      *(_QWORD *)(v87 + 32) = -1073741581LL;
      v38 = WdLogEvent5_WdAssertion(v87);
      return 3221225715LL;
    }
    if ( (v128 & 8) != 0 && v125 != 1 )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      v79[3] = v125;
      v79[4] = v127;
      v79[5] = -1073741581LL;
      v39 = WdLogEvent5_WdAssertion(v79);
      return 3221225715LL;
    }
    if ( (v128 & 8) != 0 && (v127 & 0x20) == 0 )
    {
      v88 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v88 + 24) = v127;
      *(_QWORD *)(v88 + 32) = -1073741581LL;
      v40 = WdLogEvent5_WdAssertion(v88);
      return 3221225715LL;
    }
    if ( !UserIsConsoleConnection() && (v127 & 0x88F) != 0x88F )
    {
      v89 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v89 + 24) = v127;
      *(_QWORD *)(v89 + 32) = -1073741790LL;
      v41 = WdLogEvent5_WdError(v89);
      return 3221225506LL;
    }
    if ( (v127 & 0xFFFE4000) != 0 )
    {
      v90 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v90 + 24) = v127;
      *(_QWORD *)(v90 + 32) = -1073741581LL;
      v42 = WdLogEvent5_WdError(v90);
      return 3221225715LL;
    }
    if ( (v127 & 0xC0) == 0 || (v127 & 0xC0) == 0xC0 )
    {
      v91 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v91 + 24) = v127;
      *(_QWORD *)(v91 + 32) = -1073741581LL;
      v43 = WdLogEvent5_WdError(v91);
      return 3221225715LL;
    }
    if ( (v127 & 0x180) == 0x100 )
    {
      v92 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v92 + 24) = v127;
      *(_QWORD *)(v92 + 32) = -1073741581LL;
      v44 = WdLogEvent5_WdError(v92);
      return 3221225715LL;
    }
    if ( (v127 & 0x1000) != 0 && (v127 & 0xA0) != 0xA0 )
    {
      v93 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v93 + 24) = v127;
      *(_QWORD *)(v93 + 32) = -1073741581LL;
      v45 = WdLogEvent5_WdError(v93);
      return 3221225715LL;
    }
    if ( (v127 & 0x2000) != 0 && (v127 & 0x10) == 0 )
    {
      v94 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v94 + 24) = v127;
      *(_QWORD *)(v94 + 32) = -1073741581LL;
      v46 = WdLogEvent5_WdError(v94);
      return 3221225715LL;
    }
    if ( (v127 & 0x1F) != 0 )
    {
      if ( (v127 & 0x400) != 0 )
      {
        v95 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v95 + 24) = v127;
        *(_QWORD *)(v95 + 32) = -1073741581LL;
        v47 = WdLogEvent5_WdError(v95);
        return 3221225715LL;
      }
      if ( (v127 & 0x20) != 0 )
      {
        v96 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v96 + 24) = v127;
        *(_QWORD *)(v96 + 32) = -1073741581LL;
        v48 = WdLogEvent5_WdError(v96);
        return 3221225715LL;
      }
      if ( (v127 & 0x200) != 0 )
      {
        v97 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v97 + 24) = v127;
        *(_QWORD *)(v97 + 32) = -1073741581LL;
        v49 = WdLogEvent5_WdError(v97);
        return 3221225715LL;
      }
      if ( (v127 & 0x10) != 0 )
      {
        if ( (v127 & 0x800) != 0 )
        {
          v98 = WdLogNewEntry5_WdError(v14, v13, v15);
          *(_QWORD *)(v98 + 24) = v127;
          *(_QWORD *)(v98 + 32) = -1073741581LL;
          v50 = WdLogEvent5_WdError(v98);
          return 3221225715LL;
        }
        if ( !a2 )
        {
          v99 = WdLogNewEntry5_WdError(v14, v13, v15);
          *(_QWORD *)(v99 + 24) = v127;
          *(_QWORD *)(v99 + 32) = -1073741584LL;
          v51 = WdLogEvent5_WdError(v99);
          return 3221225712LL;
        }
        if ( !v125 )
        {
          v100 = WdLogNewEntry5_WdError(v14, v13, v15);
          *(_QWORD *)(v100 + 24) = v127;
          *(_QWORD *)(v100 + 32) = -1073741585LL;
          v52 = WdLogEvent5_WdError(v100);
          return 3221225711LL;
        }
      }
      else
      {
        if ( a2 )
        {
          v101 = WdLogNewEntry5_WdError(v14, v13, v15);
          *(_QWORD *)(v101 + 24) = v127;
          *(_QWORD *)(v101 + 32) = -1073741584LL;
          v53 = WdLogEvent5_WdError(v101);
          return 3221225712LL;
        }
        if ( v125 )
        {
          v102 = WdLogNewEntry5_WdError(v14, v13, v15);
          *(_QWORD *)(v102 + 24) = v127;
          *(_QWORD *)(v102 + 32) = -1073741585LL;
          v54 = WdLogEvent5_WdError(v102);
          return 3221225711LL;
        }
      }
    }
    else
    {
      if ( (v127 & 0x20) == 0 )
      {
        v103 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v103 + 24) = v127;
        *(_QWORD *)(v103 + 32) = -1073741581LL;
        v55 = WdLogEvent5_WdError(v103);
        return 3221225715LL;
      }
      if ( (v127 & 0x800) != 0 )
      {
        v104 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v104 + 24) = v127;
        *(_QWORD *)(v104 + 32) = -1073741581LL;
        v56 = WdLogEvent5_WdError(v104);
        return 3221225715LL;
      }
      if ( !a2 )
      {
        v105 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v105 + 24) = v127;
        *(_QWORD *)(v105 + 32) = -1073741584LL;
        v57 = WdLogEvent5_WdError(v105);
        return 3221225712LL;
      }
      if ( !v125 )
      {
        v106 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v106 + 24) = v127;
        *(_QWORD *)(v106 + 32) = -1073741585LL;
        v58 = WdLogEvent5_WdError(v106);
        return 3221225711LL;
      }
      v21 = EnforceSDCCloneSourceIndexCoherency(v125, a2);
      if ( v21 < 0 )
      {
        v119 = WdLogNewEntry5_WdError(v17, v16, v18);
        *(_QWORD *)(v119 + 24) = v21;
        v59 = WdLogEvent5_WdError(v119);
        return (unsigned int)v21;
      }
      v25 = 0;
      for ( i = 0; i < v125; ++i )
      {
        v23 = (char *)a2 + 192 * i;
        v19 = 0x7FD30FEFFF7CF070LL;
        if ( (*(_QWORD *)v23 & 0x7FD30FEFFF7CF070LL) != 0 )
        {
          v120 = WdLogNewEntry5_WdError(0x7FD30FEFFF7CF070LL, v16, v18);
          *(_QWORD *)(v120 + 24) = *(_QWORD *)v23;
          v60 = WdLogEvent5_WdError(v120);
          return 3221225485LL;
        }
        if ( (*((_QWORD *)v23 + 1) & 0xFFFFFFFFFF7DF470uLL) != 0
          || (v19 = (__int64)a2 + 192 * i, (*(_QWORD *)v23 & *((_QWORD *)v23 + 1)) != *((_QWORD *)v23 + 1)) )
        {
          v107 = WdLogNewEntry5_WdError(v19, v16, v18);
          *(_QWORD *)(v107 + 24) = *(_QWORD *)v23;
          *(_QWORD *)(v107 + 32) = *((_QWORD *)v23 + 1);
          v61 = WdLogEvent5_WdError(v107);
          return 3221225485LL;
        }
        v17 = 0x8000000000000000uLL;
        if ( *(__int64 *)v23 < 0 )
        {
          if ( (*(_QWORD *)v23 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
          {
            v121 = WdLogNewEntry5_WdError(0x8004700000000000uLL, v16, v18);
            *(_QWORD *)(v121 + 24) = *(_QWORD *)v23;
            v62 = WdLogEvent5_WdError(v121);
            return 3221225485LL;
          }
          TargetVirtualization = GetTargetVirtualization(
                                   *(struct _LUID *)(v23 + 16),
                                   *((_DWORD *)v23 + 7),
                                   v27,
                                   &v24,
                                   0LL,
                                   0LL);
          if ( TargetVirtualization < 0 )
          {
            v122 = WdLogNewEntry5_WdError(v20, v16, v18);
            *(_QWORD *)(v122 + 24) = TargetVirtualization;
            v73 = WdLogEvent5_WdError(v122);
            return 3221225712LL;
          }
          v17 = 0x8000000000000LL;
          if ( (*(_QWORD *)v23 & 0x8000000000000LL) != 0 )
          {
            v75 = v23[101] != 0;
            v77 = !v27[0] || !v24;
            if ( v75 != v77 )
            {
              v123 = WdLogNewEntry5_WdError(0x8000000000000LL, v16, v18);
              v63 = WdLogEvent5_WdError(v123);
              return 3221225485LL;
            }
          }
          if ( (*(_QWORD *)v23 & 0x800LL) != 0 )
          {
            if ( !*((_DWORD *)v23 + 29) && !*((_DWORD *)v23 + 30) )
              v25 = 1;
          }
          else
          {
            v25 = 1;
          }
          for ( j = 0; j < i; ++j )
          {
            v17 = 0x8000000000000000uLL;
            if ( *(__int64 *)v23 < 0 )
            {
              v17 = (__int64)a2;
              v16 = *((unsigned int *)v23 + 39);
              if ( *((_DWORD *)a2 + 48 * j + 39) == (_DWORD)v16 )
                break;
            }
          }
          if ( j < i )
          {
            v16 = 0x8000000000000LL;
            v17 = *(_QWORD *)v23 & 0x8000000000000LL;
            if ( (*((_QWORD *)a2 + 24 * j) & 0x8000000000000LL) != v17
              || (v17 = (unsigned __int8)v23[101], *((unsigned __int8 *)a2 + 192 * j + 101) != (_DWORD)v17) )
            {
              v80 = (_QWORD *)WdLogNewEntry5_WdError(v17, 0x8000000000000LL, v18);
              v80[3] = j;
              v80[4] = i;
              v80[5] = -1073741582LL;
              v64 = WdLogEvent5_WdError(v80);
              return 3221225714LL;
            }
            if ( v24 )
            {
              v17 = (__int64)a2;
              v16 = *((unsigned int *)v23 + 4);
              if ( *((_DWORD *)a2 + 48 * j + 4) != (_DWORD)v16
                || (v17 = (__int64)a2, v16 = *((unsigned int *)v23 + 5), *((_DWORD *)a2 + 48 * j + 5) != (_DWORD)v16) )
              {
                v81 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
                v81[3] = j;
                v81[4] = i;
                v81[5] = -1073741582LL;
                v65 = WdLogEvent5_WdError(v81);
                return 3221225714LL;
              }
            }
          }
          if ( (*(_QWORD *)v23 & 0x87LL) != 0 )
          {
            if ( (*(_QWORD *)v23 & 4LL) != 0 )
            {
              v76 = *((_DWORD *)v23 + 19);
              if ( v76 <= 0 || v76 > 3 )
              {
                v108 = WdLogNewEntry5_WdError(v17, v16, v18);
                *(_QWORD *)(v108 + 24) = *((int *)v23 + 19);
                *(_QWORD *)(v108 + 32) = -1073741582LL;
                v66 = WdLogEvent5_WdError(v108);
                return 3221225714LL;
              }
            }
            if ( (*(_QWORD *)v23 & 2LL) != 0 && (!*((_DWORD *)v23 + 12) || !*((_DWORD *)v23 + 13)) )
            {
              v78 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
              v78[3] = *((unsigned int *)v23 + 12);
              v78[4] = *((unsigned int *)v23 + 13);
              v78[5] = i;
              v78[6] = -1073741582LL;
              v67 = WdLogEvent5_WdError(v78);
              return 3221225714LL;
            }
          }
          if ( (*(_QWORD *)v23 & 0x800000LL) != 0 )
          {
            if ( v27[0] && v24 )
            {
              v109 = WdLogNewEntry5_WdError(v17, v16, v18);
              *(_QWORD *)(v109 + 24) = i;
              *(_QWORD *)(v109 + 32) = -1073741584LL;
              v68 = WdLogEvent5_WdError(v109);
              return 3221225712LL;
            }
            if ( (*(_QWORD *)v23 & 0x100LL) == 0 )
            {
              v110 = WdLogNewEntry5_WdError(v17, v16, v18);
              *(_QWORD *)(v110 + 24) = i;
              *(_QWORD *)(v110 + 32) = -1073741584LL;
              v69 = WdLogEvent5_WdError(v110);
              return 3221225712LL;
            }
            v17 = *((unsigned int *)v23 + 38);
            if ( *((_DWORD *)v23 + 36) >= (int)v17
              || (v17 = *((unsigned int *)v23 + 37), *((_DWORD *)v23 + 35) >= (int)v17) )
            {
              v111 = WdLogNewEntry5_WdError(v17, v16, v18);
              *(_QWORD *)(v111 + 24) = i;
              *(_QWORD *)(v111 + 32) = -1073741582LL;
              v70 = WdLogEvent5_WdError(v111);
              return 3221225714LL;
            }
            if ( *((int *)v23 + 36) < 0
              || *((int *)v23 + 35) < 0
              || (v17 = *((unsigned int *)v23 + 23), *((_DWORD *)v23 + 38) > (unsigned int)v17)
              || (v17 = *((unsigned int *)v23 + 22), *((_DWORD *)v23 + 37) > (unsigned int)v17) )
            {
              v112 = WdLogNewEntry5_WdError(v17, v16, v18);
              *(_QWORD *)(v112 + 24) = i;
              *(_QWORD *)(v112 + 32) = -1073741582LL;
              v71 = WdLogEvent5_WdError(v112);
              return 3221225714LL;
            }
          }
        }
      }
      if ( !v25 )
      {
        v124 = WdLogNewEntry5_WdError(v17, v16, v18);
        v72 = WdLogEvent5_WdError(v124);
        return 3221225485LL;
      }
    }
    return 0LL;
  }
}

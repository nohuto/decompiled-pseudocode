/*
 * XREFs of UserJobCallout @ 0x1C001A230
 * Callers:
 *     <none>
 * Callees:
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C0016DC4 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017110 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C00171FC (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C0017268 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UserJobCallout(__int64 a1)
{
  struct _EJOB *v1; // rbp
  unsigned int v2; // ebx
  int v3; // edi
  struct tagPROCESSINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagW32JOB *i; // rcx
  int v9; // edi
  int v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(struct _EJOB **)a1;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(struct tagPROCESSINFO **)(a1 + 16);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  for ( i = (struct tagW32JOB *)gpJobsList; i && *((struct _EJOB **)i + 1) != v1; i = *(struct tagW32JOB **)i )
    ;
  if ( !v3 )
  {
    if ( i )
    {
      if ( (_DWORD)v4 == *((_DWORD *)i + 6) )
        goto LABEL_8;
    }
    else
    {
      i = CreateW32Job(v1);
      if ( !i )
      {
LABEL_20:
        v2 = -1073741823;
        goto LABEL_8;
      }
    }
    *((_DWORD *)i + 6) = (_DWORD)v4;
    UpdateJob(i);
    goto LABEL_8;
  }
  v9 = v3 - 1;
  if ( !v9 )
  {
    if ( i )
    {
      JobCalloutAddProcess(i, v4);
      goto LABEL_8;
    }
    goto LABEL_20;
  }
  if ( v9 == 1 )
  {
    if ( i )
      JobCalloutTerminate(i);
  }
  else
  {
    v2 = -1073741822;
  }
LABEL_8:
  if ( !v12 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v12);
  }
  if ( !v11 )
    UserSessionSwitchLeaveCrit(i, v5, v6, v7);
  return v2;
}

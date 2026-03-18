/*
 * XREFs of ViDeadlockCertify @ 0x14077A31C
 * Callers:
 *     ViDeadlockAnalyze @ 0x14077A004 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViDeadlockCertify(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // ebx
  int *v5; // r11
  int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // r11
  _QWORD *v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // r11

  if ( !VfWin32kDllBase
    || VfWin32kDllBase > a1
    || VfWin32kDllBase + (unsigned __int64)(unsigned int)VfWin32kSizeOfImage <= a1
    || !*(_BYTE *)(*(_QWORD *)(a2 + 64) + 48LL) )
  {
    LODWORD(v3) = *((_DWORD *)ViDeadlockGlobals + 8216);
    if ( (unsigned int)v3 < 3
      || (((v4 = **(_DWORD **)(*((_QWORD *)ViDeadlockGlobals + 4109) + 56LL),
            v5 = *(int **)(*((_QWORD *)ViDeadlockGlobals + 4110) + 56LL),
            v4 != 5)
        || (v6 = *v5, *v5 != 6))
       && ((v6 = *v5, *v5 != 5) || v4 != 6)
       || (!VfTcpIpDllBase
        || VfTcpIpDllBase > a1
        || VfTcpIpDllBase + (unsigned __int64)(unsigned int)VfTcpIpSizeOfImage <= a1)
       && (!VfTdxDllBase || VfTdxDllBase > a1 || VfTdxDllBase + (unsigned __int64)(unsigned int)VfTdxSizeOfImage <= a1)
       && (!VfMrxsmbDllBase
        || VfMrxsmbDllBase > a1
        || VfMrxsmbDllBase + (unsigned __int64)(unsigned int)VfMrxsmbSizeOfImage <= a1))
      && (v4 != 1
       || v6 != 1
       || (!VfTmDllBase || VfTmDllBase > a1 || VfTmDllBase + (unsigned __int64)(unsigned int)VfTmSizeOfImage <= a1)
       && (!VfKsDllBase || VfKsDllBase > a1 || VfKsDllBase + (unsigned __int64)(unsigned int)VfKsSizeOfImage <= a1)) )
    {
      v7 = 1;
      if ( (unsigned int)v3 <= 1 )
        goto LABEL_40;
      while ( 1 )
      {
        v8 = *((_QWORD *)ViDeadlockGlobals + v7 + 4108);
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)ViDeadlockGlobals + v7 + 4109) + 56LL) + 8LL) == *(_QWORD *)(*(_QWORD *)(v8 + 56) + 8LL)
          && (*(_DWORD *)(v8 + 72) & 2) != 0 )
        {
          break;
        }
        if ( ++v7 >= (unsigned int)v3 )
        {
          do
          {
LABEL_40:
            if ( (unsigned int)v3 <= 1 )
              return 1LL;
            v3 = (unsigned int)(v3 - 1);
            v9 = (_QWORD *)**((_QWORD **)ViDeadlockGlobals + v3 + 4109);
          }
          while ( !v9 );
          while ( 1 )
          {
            LODWORD(v10) = v3 - 1;
            if ( (_DWORD)v3 != 1 )
              break;
LABEL_39:
            v9 = (_QWORD *)*v9;
            if ( !v9 )
              goto LABEL_40;
          }
          while ( 1 )
          {
            v10 = (unsigned int)(v10 - 1);
            v11 = (_QWORD *)**((_QWORD **)ViDeadlockGlobals + v10 + 4109);
            if ( v11 )
              break;
LABEL_38:
            if ( !(_DWORD)v10 )
              goto LABEL_39;
          }
          while ( *(_QWORD *)(v11[7] + 8LL) != *(_QWORD *)(v9[7] + 8LL) )
          {
            v11 = (_QWORD *)*v11;
            if ( !v11 )
              goto LABEL_38;
          }
          ++*((_DWORD *)ViDeadlockGlobals + 8207);
          return 0LL;
        }
      }
    }
  }
  return 0LL;
}

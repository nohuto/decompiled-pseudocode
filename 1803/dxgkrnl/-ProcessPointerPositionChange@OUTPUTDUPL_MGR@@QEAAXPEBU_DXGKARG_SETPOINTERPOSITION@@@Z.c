/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E30C0
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01C9FA8 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01CA518 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01D2D78 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  __int64 VidPnSourceId; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  OUTPUTDUPL_CONTEXT **v8; // rbx
  unsigned int v9; // edi
  int v10; // r15d
  OUTPUTDUPL_CONTEXT *v11; // r8
  __int64 v12; // rax
  OUTPUTDUPL_MGR *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbp
  _QWORD *v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v12 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v12 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v12 + 32) = this;
    WdLogEvent5_WdWarning(v12);
  }
  else
  {
    v6 = *((_QWORD *)this + 2);
    v7 = 3 * VidPnSourceId;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, *(struct DXGFASTMUTEX *const *)(v6 + 24 * VidPnSourceId), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    v8 = *(OUTPUTDUPL_CONTEXT ***)(v6 + 8 * v7 + 8);
    v9 = 0;
    v10 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        v11 = *v8;
        if ( *v8 && *((_DWORD *)v11 + 79) )
        {
          if ( v10 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
            {
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v13, a2);
              v11 = *v8;
            }
            v10 = 0;
          }
          v14 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(v11, a2);
          v16 = v14;
          if ( v14 < 0 )
            break;
        }
        ++v9;
        ++v8;
        if ( v9 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v17[3] = a2->VidPnSourceId;
      v17[4] = v9;
      v17[5] = v16;
      WdLogEvent5_WdError(v17);
    }
LABEL_5:
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
}

/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00DE0E0
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E878 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01AD388 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01AD8FC (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01B2D78 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 VidPnSourceId; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  OUTPUTDUPL_CONTEXT **v12; // rdi
  unsigned int v13; // ebx
  int v14; // r15d
  __int64 v15; // rax
  OUTPUTDUPL_MGR *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbp
  _QWORD *v20; // rax
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v15 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdWarning(v15);
  }
  else
  {
    v7 = *((_QWORD *)this + 2);
    v8 = 3 * VidPnSourceId;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, *(struct DXGFASTMUTEX *const *)(v7 + 24 * VidPnSourceId), a3, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    v12 = *(OUTPUTDUPL_CONTEXT ***)(v7 + 8 * v8 + 8);
    v13 = 0;
    v14 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        if ( *v12 && *((_DWORD *)*v12 + 79) )
        {
          if ( v14 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v16, a2);
            v14 = 0;
          }
          v17 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(*v12, a2);
          v19 = v17;
          if ( v17 < 0 )
            break;
        }
        ++v13;
        ++v12;
        if ( v13 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v9);
      v20[3] = a2->VidPnSourceId;
      v20[4] = v13;
      v20[5] = v19;
      WdLogEvent5_WdError(v20);
    }
LABEL_5:
    if ( v21[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v9, v10, v11);
  }
}

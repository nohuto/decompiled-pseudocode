/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0090A10
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01C6E80 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01C73F4 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01CCB30 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  __int64 VidPnSourceId; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  OUTPUTDUPL_CONTEXT **v8; // rdi
  unsigned int v9; // ebx
  int v10; // r15d
  __int64 v11; // rax
  OUTPUTDUPL_MGR *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbp
  _QWORD *v16; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v11 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v11 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v11 + 32) = this;
    WdLogEvent5_WdWarning(v11);
  }
  else
  {
    v6 = *((_QWORD *)this + 2);
    v7 = 3 * VidPnSourceId;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, *(struct DXGFASTMUTEX *const *)(v6 + 24 * VidPnSourceId));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v8 = *(OUTPUTDUPL_CONTEXT ***)(v6 + 8 * v7 + 8);
    v9 = 0;
    v10 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        if ( *v8 && *((_DWORD *)*v8 + 79) )
        {
          if ( v10 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v12, a2);
            v10 = 0;
          }
          v13 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(*v8, a2);
          v15 = v13;
          if ( v13 < 0 )
            break;
        }
        ++v9;
        ++v8;
        if ( v9 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v16[3] = a2->VidPnSourceId;
      v16[4] = v9;
      v16[5] = v15;
      WdLogEvent5_WdError(v16);
    }
LABEL_5:
    if ( v17[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  }
}

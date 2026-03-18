/*
 * XREFs of ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01B2E40
 * Callers:
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C00DDC30 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01AC258 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01ADD08 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01B300C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPointerShape(
        unsigned int **this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int updated; // ebx
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h]
  const struct _DXGKARG_SETPOINTERSHAPE *v15; // [rsp+38h] [rbp-20h]
  const struct _DXGKARG_SETPOINTERPOSITION *v16; // [rsp+40h] [rbp-18h]

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 1987LL;
    return 0LL;
  }
  else
  {
    updated = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this[*((unsigned int *)this + 11) + 6], 2LL, (__int64)a3, a4);
    if ( updated >= 0 )
    {
      v13 = 0LL;
      v12 = 2;
      v15 = a3;
      v16 = a2;
      v14 = 2;
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
                  (OUTPUTDUPL_CONTEXT *)this,
                  (struct _OUTPUTDUPL_UPDATE_INFO *)&v12);
      DXGDXGIKEYEDMUTEX::CloseLocalMutex((__int64)this[*((unsigned int *)this + 11) + 6], 2, 0LL);
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v11 + 24) = this[*((unsigned int *)this + 11) + 6];
      *(_QWORD *)(v11 + 32) = this;
      WdLogEvent5_WdError(v11);
    }
    return (unsigned int)updated;
  }
}

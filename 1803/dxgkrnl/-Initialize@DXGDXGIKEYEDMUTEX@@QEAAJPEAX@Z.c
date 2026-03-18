/*
 * XREFs of ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C01C9AA0
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01D2364 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Initialize(DXGDXGIKEYEDMUTEX *this, void *a2)
{
  NTSTATUS v4; // eax
  _QWORD *v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v9; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = ObReferenceObjectByHandle(a2, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, (PVOID *)&v10, &v11);
  v5 = v10;
  v6 = v4;
  *(_QWORD *)this = v10;
  if ( v4 >= 0 )
  {
    if ( v5[3] && v5[4] )
    {
      return 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v9 + 24) = a2;
      WdLogEvent5_WdError(v9);
      return 3221225485LL;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = a2;
    WdLogEvent5_WdError(v7);
    return v6;
  }
}

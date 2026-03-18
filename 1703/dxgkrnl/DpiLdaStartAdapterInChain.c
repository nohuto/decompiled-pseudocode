/*
 * XREFs of DpiLdaStartAdapterInChain @ 0x1C01CDF24
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiLdaStartAdapterInChain(
        __int64 a1,
        char a2,
        bool *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6)
{
  char v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rdi
  int started; // ebx
  __int64 v17; // rax
  __int64 v18; // rbp
  bool v19; // al
  unsigned int v20; // esi
  __int64 v21; // rbp
  struct _DEVICE_OBJECT *v22; // rcx

  v9 = a2;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v14 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v14 + 508) != 1 )
  {
    v15 = *(_QWORD *)(v14 + 2592);
    if ( !v15 )
    {
LABEL_3:
      started = 1075708986;
      v17 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v17 + 24) = a1;
      goto LABEL_4;
    }
    v14 = *(_QWORD *)(v15 + 64);
  }
  v11 = *(unsigned int *)(v14 + 2600);
  if ( (_DWORD)v11 != *(_DWORD *)(v14 + 504) )
    goto LABEL_3;
  v10 = 0LL;
  *(_BYTE *)(v14 + 2604) = 0;
  if ( (_DWORD)v11 )
  {
    v13 = *(_QWORD *)(v14 + 2592);
    while ( 1 )
    {
      v18 = *(_QWORD *)(v13 + 8 * v10);
      v12 = *(_QWORD *)(v18 + 64);
      if ( *(_BYTE *)(v12 + 232) == 1 )
        break;
      if ( (unsigned int)(*(_DWORD *)(v12 + 236) - 1) > 1 )
        goto LABEL_3;
      v19 = *(_BYTE *)(v14 + 2604) || *(_DWORD *)(v14 + 1108) != *(_DWORD *)(v12 + 1108);
      v10 = (unsigned int)(v10 + 1);
      *(_BYTE *)(v14 + 2604) = v19;
      if ( (unsigned int)v10 >= (unsigned int)v11 )
        goto LABEL_16;
    }
    started = -1071774669;
    v17 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v17 + 24) = v18;
LABEL_4:
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)started;
  }
LABEL_16:
  v20 = 1;
  if ( (unsigned int)v11 > 1 )
  {
    do
    {
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 2592) + 8LL * v20) + 64LL);
      if ( *(_DWORD *)(v21 + 236) == 1 )
      {
        started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v21 + 24), v9, a3, a4, a5, a6);
        if ( started < 0 )
        {
          v22 = *(struct _DEVICE_OBJECT **)(v21 + 152);
LABEL_23:
          IoInvalidateDeviceState(v22);
          return (unsigned int)started;
        }
        v9 = a2;
      }
      ++v20;
    }
    while ( v20 < *(_DWORD *)(v14 + 2600) );
  }
  started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v14 + 24), v9, a3, a4, a5, a6);
  if ( started < 0 )
  {
    v22 = *(struct _DEVICE_OBJECT **)(v14 + 152);
    goto LABEL_23;
  }
  return (unsigned int)started;
}

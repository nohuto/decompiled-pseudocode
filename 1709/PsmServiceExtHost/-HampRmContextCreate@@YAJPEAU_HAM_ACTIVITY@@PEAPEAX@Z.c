/*
 * XREFs of ?HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z @ 0x180045A14
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180047368 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025A8C (--2@YAPEAX_K@Z.c)
 *     ?HampRmContextAllocateState@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z @ 0x18004597C (-HampRmContextAllocateState@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z.c)
 *     ?HampRmContextDestroy@@YAXPEAX@Z @ 0x180045AA0 (-HampRmContextDestroy@@YAXPEAX@Z.c)
 */

__int64 __fastcall HampRmContextCreate(struct _HAM_ACTIVITY *a1, struct HAM_ACTIVITY_RM_CONTEXT **a2)
{
  struct HAM_ACTIVITY_RM_CONTEXT *v4; // rax
  struct HAM_ACTIVITY_RM_CONTEXT *v5; // rbx
  int State; // edi

  v4 = (struct HAM_ACTIVITY_RM_CONTEXT *)operator new(0x28uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = a1;
    *(_QWORD *)v4 = &HAM_ACTIVITY_RM_CONTEXT::`vftable';
    *((_DWORD *)v4 + 8) = 1;
    *((_QWORD *)v4 + 2) = -1LL;
    *((_QWORD *)v4 + 3) = -1LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    State = HampRmContextAllocateState(v5);
    if ( State >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
      State = 0;
    }
    if ( v5 )
      HampRmContextDestroy(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}

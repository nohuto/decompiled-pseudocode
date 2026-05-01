/*
 * XREFs of ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043720
 * Callers:
 *     ?HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043660 (-HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043888 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800438A0 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x180044658 (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 */

void __fastcall HampHostEvaluatePendState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // ebx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // r10
  char v6; // r11
  int v7; // edi
  char v8; // cl
  unsigned int v9; // r8d
  int v10; // eax
  int v11; // edx

  v1 = 0;
  FirstActivity = HampHostGetFirstActivity(a1);
  v7 = v4 + 1;
  while ( FirstActivity )
  {
    if ( *((_BYTE *)FirstActivity + 500) == 3 )
      v1 = v7;
    FirstActivity = HampHostGetNextActivity(FirstActivity);
  }
  v8 = v4;
  if ( !v1 )
    v8 = v6;
  v9 = *(_DWORD *)(v5 + 628) ^ (*(_DWORD *)(v5 + 628) ^ (v3 << 12)) & 0x1000;
  *(_DWORD *)(v5 + 628) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(32 * v8)) & 0x60;
  v10 = v4;
  LOBYTE(v10) = ((v9 >> 5) & 3) == (_BYTE)v7;
  LOBYTE(v4) = v8 == (char)v7;
  if ( v4 != v10 )
  {
    if ( v8 == (_BYTE)v7 )
      v11 = v7;
    else
      v11 = -1;
    HampDepGroupAddRemoveResourceWaiter(*(struct _HAM_DEPENDENCY_GROUP **)(v5 + 640), v11);
  }
}

/*
 * XREFs of ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F8188
 * Callers:
 *     InternalInvalidate3 @ 0x1C0066B30 (InternalInvalidate3.c)
 *     SetHungFlag @ 0x1C00B7CF0 (SetHungFlag.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00C93A8 (_ChangeWindowMessageFilterEx.c)
 *     SetGestureConfigSettings @ 0x1C0110CB8 (SetGestureConfigSettings.c)
 *     _RegisterShellHookWindow @ 0x1C0114830 (_RegisterShellHookWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLAddBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  unsigned int *v4; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  struct tagWND **v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax

  v4 = (unsigned int *)*a1;
  if ( *a1 )
  {
    if ( !v4[3] )
    {
      v9 = *v4;
      v10 = 0;
      if ( *v4 )
      {
        v11 = (struct tagWND **)(v4 + 6);
        while ( a3 != *v11 )
        {
          ++v10;
          v11 += 2;
          if ( v10 >= v9 )
            goto LABEL_7;
        }
        return 0LL;
      }
LABEL_7:
      v12 = v4[1];
      if ( v9 < (unsigned int)v12 )
      {
LABEL_8:
        v13 = *v4;
        result = 1LL;
        *(_QWORD *)&v4[4 * v13 + 6] = a3;
        *(_QWORD *)&v4[4 * v13 + 4] = a2;
        ++*v4;
        return result;
      }
      if ( (unsigned __int64)(16 * v12) <= 0xFFFFFFFF && (unsigned int)(16 * v12 + 16) >= 0x10 )
      {
        v17 = 16 * v12 + 16;
        v18 = 16LL * v4[2];
        if ( v18 <= 0xFFFFFFFF )
        {
          v19 = v17 + v18;
          if ( v19 >= v17 )
          {
            v20 = UserReAllocPoolZInit(v4, v17, v19, 1819702101LL);
            v4 = (unsigned int *)v20;
            if ( v20 )
            {
              *(_DWORD *)(v20 + 4) += *(_DWORD *)(v20 + 8);
              *a1 = (struct tagVWPL *)v20;
              goto LABEL_8;
            }
          }
        }
      }
    }
  }
  else if ( 16 * (unsigned __int64)a4 <= 0xFFFFFFFF )
  {
    v15 = 16 * a4 + 16;
    if ( v15 >= 0x10 )
    {
      v16 = Win32AllocPoolZInit(v15, 1819702101LL);
      v4 = (unsigned int *)v16;
      if ( v16 )
      {
        *(_DWORD *)v16 = 0;
        *(_DWORD *)(v16 + 12) = 0;
        *(_DWORD *)(v16 + 4) = a4;
        *(_DWORD *)(v16 + 8) = a4;
        *a1 = (struct tagVWPL *)v16;
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}

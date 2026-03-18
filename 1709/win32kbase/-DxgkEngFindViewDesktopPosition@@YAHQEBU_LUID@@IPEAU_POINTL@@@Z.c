/*
 * XREFs of ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C0068300
 * Callers:
 *     <none>
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C003CDE0 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     hdevEnumerate @ 0x1C00684D0 (hdevEnumerate.c)
 */

__int64 __fastcall DxgkEngFindViewDesktopPosition(const struct _LUID *const a1, int a2, struct _POINTL *a3)
{
  unsigned int v3; // edi
  __int64 i; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  struct _LUID *v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = v9 )
  {
    v8 = hdevEnumerate(i);
    v9 = v8;
    if ( !v8 )
      break;
    v13 = v8;
    v10 = *(_DWORD *)(v8 + 32);
    if ( (v10 & 0x400) == 0 && (v10 & 0x20000) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
      {
        v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v13);
        if ( v11->LowPart == a1->LowPart
          && v11->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(v9 + 2592) + 272LL) == a2 )
        {
          v3 = 1;
          *a3 = *(struct _POINTL *)(v9 + 2600);
        }
      }
    }
  }
  return v3;
}

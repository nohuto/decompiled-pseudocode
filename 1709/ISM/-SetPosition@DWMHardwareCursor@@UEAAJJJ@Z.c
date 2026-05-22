/*
 * XREFs of ?SetPosition@DWMHardwareCursor@@UEAAJJJ@Z @ 0x180028990
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180026DF0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?SetEnable@DWMHardwareCursor@@IEAAJ_N@Z @ 0x180028120 (-SetEnable@DWMHardwareCursor@@IEAAJ_N@Z.c)
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x1800281E0 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMHardwareCursor::SetPosition(DWMHardwareCursor *this, int a2, int a3)
{
  int v3; // esi
  int v4; // r14d
  DWMHardwareCursor *v5; // rbx
  __int64 v7; // rcx
  int updated; // eax
  int v9; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+3Ch] [rbp-4Ch]
  int v14; // [rsp+40h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-40h] BYREF
  int v16; // [rsp+4Ch] [rbp-3Ch]
  int v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+54h] [rbp-34h]
  int v19; // [rsp+58h] [rbp-30h]
  int v20; // [rsp+5Ch] [rbp-2Ch]
  __int64 v21; // [rsp+60h] [rbp-28h]
  __int64 v28; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( !*((_BYTE *)this + 352) )
    return 0LL;
  if ( *((_BYTE *)this + 384) )
    DWMHardwareCursor::UpdateBitmapSource((DWMHardwareCursor *)((char *)this - 8));
  v7 = *((_QWORD *)v5 + 4);
  if ( !v7 )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL))(v7, &v28);
  v11 = v28;
  v12 = v4 - *((_DWORD *)v5 + 94);
  v13 = v3 - *((_DWORD *)v5 + 95);
  v14 = *((unsigned __int8 *)v5 + 352);
  v15 = 1;
  v16 = *((_DWORD *)v5 + 92);
  v17 = *((_DWORD *)v5 + 93);
  v18 = v16 * *((_DWORD *)v5 + 103);
  v19 = 0;
  v20 = 0;
  v21 = *((_QWORD *)v5 + 56);
  try
  {
    updated = NtHWCursorUpdatePointer(&v11, &v15);
    v9 = updated;
  }
  catch ( ... )
  {
    v5 = this;
    v3 = a3;
    v4 = a2;
    updated = v9;
  }
  if ( updated >= 0 || updated == -1073741822 || updated == -1073741637 )
  {
    if ( !*((_BYTE *)v5 + 353) )
    {
      DWMHardwareCursor::SetEnable((DWMHardwareCursor *)((char *)v5 - 8), 1);
      *((_BYTE *)v5 + 353) = 1;
    }
  }
  else
  {
LABEL_24:
    if ( *((_BYTE *)v5 + 353) )
    {
      DWMHardwareCursor::SetEnable((DWMHardwareCursor *)((char *)v5 - 8), 0);
      *((_BYTE *)v5 + 353) = 0;
    }
  }
  return DWMCursor::SetPosition(v5, v4, v3);
}

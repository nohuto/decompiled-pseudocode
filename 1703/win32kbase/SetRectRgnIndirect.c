/*
 * XREFs of SetRectRgnIndirect @ 0x1C00390D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003C4E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall SetRectRgnIndirect(HRGN a1, LONG *a2)
{
  LONG v2; // esi
  LONG v3; // r14d
  LONG v4; // ebx
  LONG v5; // r15d
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 result; // rax
  struct _RECTL v9; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-28h]

  v2 = a2[3];
  v3 = a2[2];
  v4 = a2[1];
  v5 = *a2;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, a1, 0);
  v6 = v10[0];
  v7 = 0;
  if ( v10[0] )
  {
    v9.left = v5;
    v9.top = v4;
    v9.right = v3;
    v9.bottom = v2;
    if ( ((v5 & 0xF8000000) == 0 || (v5 & 0xF8000000) == -134217728)
      && (((v2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((v3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((v4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      if ( v5 > v3 )
      {
        v9.left = v3;
        v9.right = v5;
      }
      if ( v4 > v2 )
      {
        v9.top = v2;
        v9.bottom = v4;
      }
      RGNOBJ::vSet((RGNOBJ *)v10, &v9);
      v7 = 1;
    }
  }
  if ( !v11 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v10);
  result = v7;
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
  return result;
}

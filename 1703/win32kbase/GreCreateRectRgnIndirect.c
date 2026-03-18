/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C003F3D0
 * Callers:
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C00373A0 (NtUserGetDC.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0038F70 (SetOrCreateRectRgnIndirectPublic.c)
 *     CreateEmptyRgn @ 0x1C0041FA0 (CreateEmptyRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C00425D0 (CreateEmptyRgnPublic.c)
 *     UserValidateCopyRgn @ 0x1C007FB20 (UserValidateCopyRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003F540 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  __int64 Object; // rax
  __int64 v4; // rdi
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  struct HOBJ__ *inserted; // rbx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (a1->top & 0xF8000000) != 0 && (a1->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v11 = 0;
    Object = AllocateObject(0xD8uLL, 4u, 0);
    v10 = Object;
    v4 = Object;
    if ( Object )
    {
      *(_DWORD *)(Object + 24) = 216;
      *(_DWORD *)(Object + 80) = 0;
      *(_DWORD *)(Object + 32) = 0;
      *(_DWORD *)(Object + 28) = 0;
      *(_DWORD *)(Object + 36) = 0;
      *(_QWORD *)(Object + 56) = Object + 48;
      *(_QWORD *)(Object + 48) = Object + 48;
      left = a1->left;
      right = a1->right;
      if ( a1->left > right )
      {
        a1->left = right;
        a1->right = left;
      }
      top = a1->top;
      bottom = a1->bottom;
      if ( top > bottom )
      {
        a1->top = bottom;
        a1->bottom = top;
      }
      RGNOBJ::vSet((RGNOBJ *)&v10, a1);
      inserted = HmgInsertObjectInternal((struct OBJECT *)v4, 1u, 4u);
      if ( inserted )
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
      else
        REGION::vDeleteREGION((REGION *)v4);
    }
    else
    {
      EngSetLastError(8u);
      return 0LL;
    }
    return inserted;
  }
}

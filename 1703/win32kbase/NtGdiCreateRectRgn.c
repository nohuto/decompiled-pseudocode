/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C00593E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C003C030 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003F4EC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0040E3C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     HmgFreeObjectAttr @ 0x1C0058B38 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C005997C (HmgAllocateObjectAttr.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  struct HOBJ__ *v4; // rdi
  __int64 ObjectAttr; // rsi
  struct OBJECT *v7; // rbx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v9; // [rsp+38h] [rbp-28h] BYREF
  struct OBJECT *v10; // [rsp+48h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp-10h]

  v9.left = a1;
  v9.top = a2;
  v9.right = a3;
  v9.bottom = a4;
  if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != -134217728
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    ObjectAttr = HmgAllocateObjectAttr();
    if ( ObjectAttr )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10, 0LL, 1);
      v7 = v10;
      if ( v10 )
      {
        ERECTL::vOrder((ERECTL *)&v9);
        RGNOBJ::vSet((RGNOBJ *)&v10, &v9);
        v8 = 0LL;
        v4 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v8, v7, 0, 0, 4u);
        if ( v4 )
        {
          *((_QWORD *)GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v7) + 2) = ObjectAttr;
        }
        else
        {
          REGION::vDeleteREGION(v7);
          v7 = 0LL;
          v10 = 0LL;
          HmgFreeObjectAttr(ObjectAttr);
        }
        if ( v8 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
          v7 = v10;
        }
      }
      else
      {
        v4 = 0LL;
        EngSetLastError(8u);
      }
      if ( v11 == 1 )
        REGION::vDeleteREGION(v7);
    }
    else
    {
      v4 = 0LL;
      EngSetLastError(8u);
    }
  }
  return v4;
}

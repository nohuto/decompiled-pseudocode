/*
 * XREFs of BiBindEfiBootManager @ 0x140736118
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1407364EC (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1407348DC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140734974 (BcdDeleteObject.c)
 *     BiQueryBootEntryOrder @ 0x140738214 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407382CC (BiQueryBootOptions.c)
 *     BiTranslateBootEntryId @ 0x140738438 (BiTranslateBootEntryId.c)
 *     BiTranslateBootOrder @ 0x140738478 (BiTranslateBootOrder.c)
 */

__int64 __fastcall BiBindEfiBootManager(__int64 a1, __int64 a2)
{
  void *v4; // r14
  int Object; // ebx
  PVOID PoolWithTag; // rax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-48h] BYREF
  PVOID v16; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v17[2]; // [rsp+48h] [rbp-38h] BYREF
  PVOID P; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-20h] BYREF

  v16 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v4 = 0LL;
  if ( (int)BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR.Data1, &Handle) >= 0 )
  {
    BcdDeleteObject(Handle);
    Handle = 0LL;
  }
  v17[1] = 269484033;
  v17[0] = 1;
  Object = BcdCreateObject(a1, (int)&GUID_FIRMWARE_BOOTMGR, (int)v17, (__int64 *)&Handle);
  if ( Object >= 0 )
  {
    Object = BiQueryBootEntryOrder(&v16, &v15);
    if ( Object >= 0 )
    {
      if ( v15 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v15, 0x4B444342u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
          Object = -1073741670;
          goto LABEL_19;
        }
        BiTranslateBootOrder(a2, v16, PoolWithTag, &v15);
        if ( v15 )
        {
          Object = BcdSetElementDataWithFlags(Handle, 0x24000001u, v7, (__int64)v4, 16 * v15);
          if ( Object < 0 )
            goto LABEL_19;
        }
      }
      v8 = BiQueryBootOptions(&P, &v15);
      v10 = (unsigned int *)P;
      Object = v8;
      if ( v8 >= 0 )
      {
        if ( *((_DWORD *)P + 2) == -1
          || (v19 = *((unsigned int *)P + 2),
              Object = BcdSetElementDataWithFlags(Handle, 0x25000004u, v9, (__int64)&v19, 8u),
              Object >= 0) )
        {
          v11 = v10[4];
          if ( (_DWORD)v11 == -2
            || (int)BiTranslateBootEntryId(a2, v11, v20) < 0
            || (Object = BcdSetElementDataWithFlags(Handle, 0x24000002u, v12, (__int64)v20, 0x10u), Object >= 0) )
          {
            Object = 0;
          }
        }
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0x4B444342u);
    }
LABEL_19:
    if ( v16 )
      ExFreePoolWithTag(v16, 0x4B444342u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
  }
  if ( Handle )
  {
    if ( Object >= 0 )
      BcdCloseObject(Handle);
    else
      BcdDeleteObject(Handle);
  }
  return (unsigned int)Object;
}

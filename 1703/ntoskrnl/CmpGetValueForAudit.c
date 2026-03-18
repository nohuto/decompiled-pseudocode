/*
 * XREFs of CmpGetValueForAudit @ 0x140671210
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 */

__int64 __fastcall CmpGetValueForAudit(__int64 a1, unsigned int a2, __int64 a3, ULONG a4)
{
  PVOID v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  PVOID TransientPoolWithTag; // rax
  int v16; // eax
  size_t Size; // [rsp+40h] [rbp-20h] BYREF
  void *Src; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v20[8]; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v21[8]; // [rsp+58h] [rbp-8h] BYREF
  char v22; // [rsp+90h] [rbp+30h] BYREF

  Src = 0LL;
  v22 = 0;
  HvpGetCellContextReinitialize((__int64)v20);
  v8 = 0LL;
  HvpGetCellContextReinitialize((__int64)v21);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(a1 + 8))(a1, v9, v21);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741670;
  v13 = 0;
  LODWORD(Size) = 0;
  if ( !*(_DWORD *)(v10 + 4) )
    goto LABEL_9;
  if ( CmpGetValueData(a1, a2, v10, (unsigned int *)&Size, (__int64)&Src, (__int64)&v22, (__int64)v20) )
  {
    v13 = Size;
    if ( (_DWORD)Size )
    {
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag(v14, (unsigned int)Size, a4);
      v8 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
        goto LABEL_5;
      memmove(TransientPoolWithTag, Src, v13);
    }
LABEL_9:
    v16 = *(_DWORD *)(v11 + 12);
    *(_DWORD *)(a3 + 4) = v13;
    v12 = 0;
    *(_DWORD *)a3 = v16;
    *(_QWORD *)(a3 + 8) = v8;
    goto LABEL_10;
  }
LABEL_5:
  v12 = -1073741670;
LABEL_10:
  if ( Src )
  {
    if ( v22 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 16))(a1, v20);
  }
  (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 16))(a1, v21);
  return v12;
}

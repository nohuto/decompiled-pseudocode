/*
 * XREFs of KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1402441DC
 * Callers:
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140243A50 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x1402446D8 (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x140244788 (KiValidateTriageDumpDataArray.c)
 */

char KiInvokeBugCheckAddTriageDumpDataCallbacks()
{
  _UNKNOWN **v0; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r9
  _QWORD *v4; // rdx
  __int64 v6; // [rsp+30h] [rbp-58h] BYREF
  int v7; // [rsp+38h] [rbp-50h]
  int v8; // [rsp+3Ch] [rbp-4Ch]
  int v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  int v15; // [rsp+90h] [rbp+8h]
  PVOID *v16; // [rsp+98h] [rbp+10h] BYREF
  PVOID *v17; // [rsp+A0h] [rbp+18h]
  PVOID *v18; // [rsp+A8h] [rbp+20h]

  v0 = &retaddr;
  v18 = &KeBugCheckReasonCallbackListHead;
  v1 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_1403B48E8 )
  {
    v16 = &KeBugCheckReasonCallbackListHead;
    while ( 1 )
    {
      v17 = v1;
      if ( v1 == &KeBugCheckReasonCallbackListHead )
        break;
      LOBYTE(v0) = KeValidateBugCheckCallbackRecord((__int64)v1, 7, &v16);
      if ( (_BYTE)v0 )
      {
        v6 = 0LL;
        v7 = 1;
        v8 = 0x2000000;
        v9 = KiBugCheckData;
        v10 = qword_1403ADD08;
        v11 = qword_1403ADD10;
        v12 = qword_1403ADD18;
        v13 = qword_1403ADD20;
        LOBYTE(v0) = ((__int64 (__fastcall *)(__int64, PVOID *, __int64 *))v1[2])(7LL, v1, &v6);
        if ( v6
          && (LOBYTE(v0) = KiValidateTriageDumpDataArray(v6, v2, 0x2000000LL, v3), (_BYTE)v0)
          && (LOBYTE(v0) = KiValidateComponentName((STRSAFE_PCNZCH)v1[3]), (_BYTE)v0) )
        {
          *(_QWORD *)(v6 + 32) = v1[3];
          *(_DWORD *)(v6 + 28) = v15 + 1;
          v0 = (_UNKNOWN **)v6;
          v4 = (_QWORD *)qword_1403B48D8;
          if ( *(__int64 **)qword_1403B48D8 != &KeBugCheckTriageDumpDataArrayListHead )
            __fastfail(3u);
          *(_QWORD *)v6 = &KeBugCheckTriageDumpDataArrayListHead;
          v0[1] = v4;
          *v4 = v0;
          qword_1403B48D8 = (__int64)v0;
          *((_BYTE *)v1 + 44) = 3;
        }
        else
        {
          *((_BYTE *)v1 + 44) = 4;
        }
      }
      else if ( !v16 )
      {
        return (char)v0;
      }
      v1 = (PVOID *)*v1;
    }
  }
  return (char)v0;
}

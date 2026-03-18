/*
 * XREFs of EtwpObjectHandleEnumCallback @ 0x14074D630
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x14017D4AC (ExCheckSingleFilter.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 */

char __fastcall EtwpObjectHandleEnumCallback(__int64 a1, volatile signed __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdx
  __int16 v7; // r12
  unsigned __int16 v8; // r12
  unsigned __int64 v9; // rdx
  bool v10; // zf
  void *v12; // r14
  unsigned int v13; // edi
  _WORD *v14; // r10
  __int64 v15; // r8
  int v16; // r9d
  int v17; // r8d
  unsigned int v18; // r11d
  unsigned int v19; // r8d
  _WORD *PoolWithTag; // rbx
  int v21; // r15d
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  signed __int32 v27[8]; // [rsp+0h] [rbp-69h] BYREF
  unsigned __int16 v28; // [rsp+20h] [rbp-49h]
  unsigned int v29; // [rsp+28h] [rbp-41h]
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-31h] BYREF
  int v32; // [rsp+40h] [rbp-29h]
  unsigned int v33; // [rsp+44h] [rbp-25h]
  __int16 v34; // [rsp+48h] [rbp-21h]
  unsigned __int64 *v35; // [rsp+50h] [rbp-19h] BYREF
  int v36; // [rsp+58h] [rbp-11h]
  int v37; // [rsp+5Ch] [rbp-Dh]
  __int64 v38; // [rsp+60h] [rbp-9h]
  int v39; // [rsp+68h] [rbp-1h]
  int v40; // [rsp+6Ch] [rbp+3h]

  v5 = *a2;
  v7 = -(*(_BYTE *)(a4 + 104) != 0);
  v32 = *(_DWORD *)(a4 + 44);
  v8 = v7 + 4391;
  v9 = (v5 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v33 = a3;
  v10 = *(_BYTE *)(a4 + 108) == 0;
  v12 = (void *)(v9 + 48);
  v31 = v9 + 48;
  if ( !v10 )
    v33 = a3 | 0x80000000;
  v13 = 1;
  v14 = *(_WORD **)(a4 + 8);
  v34 = (unsigned __int8)(ObHeaderCookie ^ BYTE1(v9) ^ *(_BYTE *)(v9 + 24));
  if ( v14 )
  {
    v15 = 0LL;
    if ( !*v14 )
    {
LABEL_8:
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v27, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      return 0;
    }
    v16 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(v9) ^ (unsigned __int64)*(unsigned __int8 *)(v9 + 24)]
                    + 192);
    while ( !(unsigned int)ExCheckSingleFilter(v16, *(_DWORD *)&v14[2 * v15 + 2]) )
    {
      v15 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v15 >= v18 )
        goto LABEL_8;
    }
  }
  ObfReferenceObjectWithTag(v12, 0x54777445u);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v27, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  v19 = *(unsigned __int16 *)(a4 + 24);
  v37 = 0;
  PoolWithTag = *(_WORD **)(a4 + 16);
  v35 = &v31;
  LODWORD(NumberOfBytes) = v19;
  v36 = 18;
  while ( 1 )
  {
    v21 = ObQueryNameStringMode((char *)v12, (__int64)PoolWithTag, v19, &NumberOfBytes, 0);
    if ( v21 != -1073741820 )
      break;
    if ( PoolWithTag != *(_WORD **)(a4 + 16) )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74777445u);
    if ( !PoolWithTag )
      break;
    v19 = NumberOfBytes;
  }
  ObfDereferenceObjectWithTag(v12, 0x54777445u);
  if ( !v21 )
  {
    v22 = 0x2000;
    if ( *PoolWithTag < 0x2000u )
      v22 = (unsigned __int16)*PoolWithTag;
    v23 = *((_QWORD *)PoolWithTag + 1);
    v13 = 2;
    v40 = 0;
    v38 = v23;
    v39 = v22;
  }
  v24 = 16LL * v13;
  v29 = 4200450;
  v28 = v8;
  *(int *)((char *)&v37 + v24) = 0;
  *(int *)((char *)&v36 + v24) = 2;
  v25 = *(_QWORD *)(a4 + 32);
  (&v35)[(unsigned __int64)v24 / 8] = (unsigned __int64 *)&EtwpNull;
  EtwpLogKernelEvent((__int64)&v35, *(_QWORD *)(v25 + 2256), *(_DWORD *)v25, v13 + 1, v28, v29);
  if ( PoolWithTag && PoolWithTag != *(_WORD **)(a4 + 16) )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0;
}

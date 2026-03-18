/*
 * XREFs of ObCaptureObjectStateForDuplication @ 0x140506A7C
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x140506768 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObpIncrementHandleCountEx @ 0x1404B1770 (ObpIncrementHandleCountEx.c)
 *     RtlMapGenericMask @ 0x1404C0550 (RtlMapGenericMask.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140507D70 (ObpReferenceProcessObjectByHandle.c)
 */

__int64 __fastcall ObCaptureObjectStateForDuplication(
        struct _EX_RUNDOWN_REF *Object,
        __int64 a2,
        ACCESS_MASK a3,
        char a4,
        char a5,
        __int64 a6)
{
  ACCESS_MASK v7; // r14d
  int v8; // ebx
  int v10; // esi
  unsigned __int64 v11; // rax
  int v12; // r9d
  int v13; // ebx
  ACCESS_MASK v14; // r12d
  int v15; // ebx
  char *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // r13
  int v19; // r14d
  char v21; // [rsp+40h] [rbp-20h] BYREF
  ACCESS_MASK v22; // [rsp+44h] [rbp-1Ch]
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  PVOID Objecta[2]; // [rsp+50h] [rbp-10h] BYREF
  ACCESS_MASK AccessMask; // [rsp+B0h] [rbp+50h] BYREF
  int v27; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a3;
  v8 = a2;
  v10 = a4 & 2;
  if ( (a4 & 2) == 0 && (a3 & 0xCE00000) != 0 )
    return 3221225506LL;
  v11 = ObReferenceProcessHandleTable(Object);
  if ( !v11 )
    return 3221225738LL;
  LOBYTE(v12) = a5;
  v13 = ObpReferenceProcessObjectByHandle(
          v8,
          (_DWORD)Object,
          v11,
          v12,
          1967415887,
          (__int64)Objecta,
          (__int64)&v21,
          (__int64)&v23);
  if ( v13 < 0 )
  {
    ExReleaseRundownProtection_0(Object + 95);
    return (unsigned int)v13;
  }
  if ( (v21 & 4) != 0 )
    LODWORD(v23) = 0;
  v14 = v22;
  if ( v10 )
    v7 = v22;
  v15 = v21 & 0xC;
  AccessMask = v7;
  if ( (a4 & 8) != 0 )
    v15 = v21 & 4 | 8;
  v16 = (char *)Objecta[0];
  v17 = a6;
  *(_QWORD *)(a6 + 28) = v23;
  v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v16 - 48) >> 8)];
  if ( (v7 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v18 + 76));
    v7 = AccessMask;
  }
  v27 = v7 & (*(_DWORD *)(v18 + 92) | 0x1000000);
  if ( (~v14 & v27) != 0 )
  {
    ExReleaseRundownProtection_0(Object + 95);
    ObfDereferenceObjectWithTag(v16, 0x7544624Fu);
    return 3221225506LL;
  }
  v19 = ObpIncrementHandleCountEx(2u, (__int64)&v27, (ULONG_PTR)Object, (__int64)v16, a5, v15, 0LL);
  ExReleaseRundownProtection_0(Object + 95);
  if ( v19 < 0 )
  {
    ObfDereferenceObjectWithTag(v16, 0x7544624Fu);
  }
  else
  {
    *(_DWORD *)(v17 + 24) = v27;
    *(_QWORD *)(v17 + 8) = a2;
    *(_DWORD *)(v17 + 36) = v15;
    ObfReferenceObjectWithTag(Object, 0x7544624Fu);
    *(_QWORD *)v17 = Object;
    *(_QWORD *)(v17 + 16) = v16;
  }
  return (unsigned int)v19;
}

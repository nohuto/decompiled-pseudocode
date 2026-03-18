/*
 * XREFs of EtwpAddUmRegEntry @ 0x1405909C0
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ObReferenceObjectByPointer @ 0x140073920 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     EtwpReferenceGuidEntry @ 0x1405908C8 (EtwpReferenceGuidEntry.c)
 */

__int64 __fastcall EtwpAddUmRegEntry(
        ULONG_PTR BugCheckParameter2,
        int a2,
        __int16 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int inserted; // ebx
  _KPROCESS *Process; // rbx
  volatile signed __int16 *v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v18; // [rsp+20h] [rbp-88h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+58h] [rbp-50h] BYREF
  int v21; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp-38h]
  int v24; // [rsp+78h] [rbp-30h]
  __int128 v25; // [rsp+80h] [rbp-28h]

  v21 = 48;
  v22 = 0LL;
  v24 = 64;
  v23 = 0LL;
  v25 = 0LL;
  inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (int)&v21, 1u, v18, 112, 0, 0, &Object, 0LL);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0x70uLL);
    Process = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(Process, 0x52777445u);
    v12 = (volatile signed __int16 *)Object;
    *((_QWORD *)Object + 10) = Process;
    _InterlockedOr16(v12 + 49, 2u);
    if ( a2 == 2 )
      _InterlockedOr16(v12 + 49, 8u);
    v13 = Object;
    *((_WORD *)Object + 48) = a3;
    v13[11] = a4;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    v14 = (_QWORD *)(BugCheckParameter2 + 40);
    v13[4] = BugCheckParameter2;
    v15 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( *(_QWORD *)(v15 + 8) != BugCheckParameter2 + 40 )
      __fastfail(3u);
    v13[1] = v14;
    *v13 = v15;
    *(_QWORD *)(v15 + 8) = v13;
    *v14 = v13;
    v13[3] = v13 + 2;
    v13[2] = v13 + 2;
    _InterlockedOr16(v12 + 49, 0x80u);
    v16 = Object;
    ObReferenceObjectByPointer(Object, 0, EtwpRegistrationObjectType, 0);
    inserted = ObInsertObjectEx(v16, 0LL, 2052LL, 1, 0, (__int64)&v20, a6);
    *a5 = v16;
    if ( inserted >= 0 )
      ObfDereferenceObject(v16);
  }
  return (unsigned int)inserted;
}

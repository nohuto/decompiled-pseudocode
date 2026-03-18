/*
 * XREFs of ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00D6B94
 * Callers:
 *     NtGdiCreateColorSpace @ 0x1C00D7070 (NtGdiCreateColorSpace.c)
 *     bInitICM @ 0x1C01F3DF8 (bInitICM.c)
 * Callees:
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     FreeObject @ 0x1C00449C0 (FreeObject.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0044C10 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00D21F8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

struct HOBJ__ *__fastcall GreCreateColorSpace(struct _LOGCOLORSPACEEXW *a1)
{
  struct HOBJ__ *v1; // rsi
  struct OBJECT *Object; // rax
  __int64 v4; // rdi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( *(_DWORD *)a1 == 1347637059 && *((_DWORD *)a1 + 1) == 1024 && *((_DWORD *)a1 + 2) == 588 )
  {
    Object = (struct OBJECT *)AllocateObject(0x268uLL, 9u, 0);
    v4 = (__int64)Object;
    if ( Object )
    {
      v6 = 0LL;
      v1 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v6, Object, 1u, 0, 9);
      if ( v1 )
      {
        *(_DWORD *)(v4 + 24) = *(_DWORD *)a1;
        *(_DWORD *)(v4 + 28) = *((_DWORD *)a1 + 1);
        *(_DWORD *)(v4 + 32) = *((_DWORD *)a1 + 2);
        *(_DWORD *)(v4 + 36) = *((_DWORD *)a1 + 3);
        *(_DWORD *)(v4 + 40) = *((_DWORD *)a1 + 4);
        *(_OWORD *)(v4 + 44) = *(_OWORD *)((char *)a1 + 20);
        *(_OWORD *)(v4 + 60) = *(_OWORD *)((char *)a1 + 36);
        *(_DWORD *)(v4 + 76) = *((_DWORD *)a1 + 13);
        *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 14);
        *(_DWORD *)(v4 + 84) = *((_DWORD *)a1 + 15);
        *(_DWORD *)(v4 + 88) = *((_DWORD *)a1 + 16);
        RtlStringCchCopyW((unsigned __int16 *)(v4 + 92), 0x104uLL, (size_t *)((char *)a1 + 68));
        *(_DWORD *)(v4 + 612) = *((_DWORD *)a1 + 147);
        HmgDecrementShareReferenceCountEx((struct OBJECT *)v4, 0LL);
      }
      else
      {
        FreeObject(v4, 9);
      }
      if ( v6 )
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
    }
    return v1;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}

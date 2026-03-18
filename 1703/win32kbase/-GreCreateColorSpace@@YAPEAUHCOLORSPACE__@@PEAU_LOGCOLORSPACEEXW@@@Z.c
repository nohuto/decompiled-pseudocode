/*
 * XREFs of ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0078460
 * Callers:
 *     NtGdiCreateColorSpace @ 0x1C00FA9E0 (NtGdiCreateColorSpace.c)
 *     bInitICM @ 0x1C01D78AC (bInitICM.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003F4EC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

struct HOBJ__ *__fastcall GreCreateColorSpace(struct _LOGCOLORSPACEEXW *a1)
{
  struct HOBJ__ *v2; // rsi
  struct OBJECT *Object; // rax
  __int64 v4; // rdi
  __int64 v6; // rdx
  _WORD *v7; // rcx
  __int16 v8; // ax
  _WORD *v9; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( *(_DWORD *)a1 == 1347637059 && *((_DWORD *)a1 + 1) == 1024 && *((_DWORD *)a1 + 2) == 588 )
  {
    Object = (struct OBJECT *)AllocateObject(0x268uLL, 9u, 0);
    v4 = (__int64)Object;
    if ( Object )
    {
      v10 = 0LL;
      v2 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v10, Object, 1, 0, 9u);
      if ( v2 )
      {
        *(_DWORD *)(v4 + 24) = *(_DWORD *)a1;
        v6 = 260LL;
        *(_DWORD *)(v4 + 28) = *((_DWORD *)a1 + 1);
        *(_DWORD *)(v4 + 32) = *((_DWORD *)a1 + 2);
        *(_DWORD *)(v4 + 36) = *((_DWORD *)a1 + 3);
        *(_DWORD *)(v4 + 40) = *((_DWORD *)a1 + 4);
        v7 = (_WORD *)(v4 + 92);
        *(_OWORD *)(v4 + 44) = *(_OWORD *)((char *)a1 + 20);
        *(_OWORD *)(v4 + 60) = *(_OWORD *)((char *)a1 + 36);
        *(_DWORD *)(v4 + 76) = *((_DWORD *)a1 + 13);
        *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 14);
        *(_DWORD *)(v4 + 84) = *((_DWORD *)a1 + 15);
        *(_DWORD *)(v4 + 88) = *((_DWORD *)a1 + 16);
        do
        {
          if ( v6 == -2147483386 )
            break;
          v8 = *(_WORD *)((char *)v7 + (_QWORD)((char *)a1 - v4 - 24));
          if ( !v8 )
            break;
          *v7++ = v8;
          --v6;
        }
        while ( v6 );
        v9 = v7 - 1;
        if ( v6 )
          v9 = v7;
        *v9 = 0;
        *(_DWORD *)(v4 + 612) = *((_DWORD *)a1 + 147);
        HmgDecrementShareReferenceCount(v4);
      }
      else
      {
        FreeObject(v4, 9);
      }
      if ( v10 )
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
    }
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}

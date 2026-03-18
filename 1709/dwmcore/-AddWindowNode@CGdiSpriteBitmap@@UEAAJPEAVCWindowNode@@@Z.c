/*
 * XREFs of ?AddWindowNode@CGdiSpriteBitmap@@UEAAJPEAVCWindowNode@@@Z @ 0x18009D430
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddWindowNode(CGdiSpriteBitmap *this, struct CWindowNode *a2)
{
  char *v2; // r10
  signed int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // r8d
  unsigned int v6; // edx
  unsigned int v7; // eax
  struct CWindowNode **v9; // rax
  signed int v10; // eax
  unsigned int v11; // [rsp+40h] [rbp+8h]
  struct CWindowNode *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 112;
  v3 = 0;
  v4 = *((unsigned int *)this + 34);
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    v9 = *(struct CWindowNode ***)v2;
    while ( a2 != *v9 )
    {
      ++v5;
      ++v9;
      if ( v5 >= (unsigned int)v4 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v6 = v11;
    v7 = v4 + 1;
    if ( (int)v4 + 1 >= (unsigned int)v4 )
      v6 = v4 + 1;
    v3 = v7 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( v7 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)v2 + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v12);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8 * v4) = v12;
      *((_DWORD *)v2 + 6) = v6;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xC6u);
  }
  return (unsigned int)v3;
}

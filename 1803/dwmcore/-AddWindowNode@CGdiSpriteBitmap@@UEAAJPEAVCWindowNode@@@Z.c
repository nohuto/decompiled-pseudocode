/*
 * XREFs of ?AddWindowNode@CGdiSpriteBitmap@@UEAAJPEAVCWindowNode@@@Z @ 0x180093CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddWindowNode(CGdiSpriteBitmap *this, struct CWindowNode *a2)
{
  char *v2; // r10
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  unsigned int v7; // ecx
  struct CWindowNode **v9; // rcx
  int v10; // eax
  struct CWindowNode *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (char *)this + 112;
  v3 = 0;
  v4 = *((unsigned int *)this + 34);
  v5 = 0;
  v6 = *((_QWORD *)this + 14);
  if ( (_DWORD)v4 )
  {
    v9 = (struct CWindowNode **)*((_QWORD *)this + 14);
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
    v7 = v4 + 1;
    v3 = (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v2 + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v11);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = v11;
      *((_DWORD *)v2 + 6) = v7;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xC5u);
  }
  return (unsigned int)v3;
}

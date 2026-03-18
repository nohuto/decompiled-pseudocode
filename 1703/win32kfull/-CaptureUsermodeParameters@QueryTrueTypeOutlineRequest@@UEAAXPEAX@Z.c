/*
 * XREFs of ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C012E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C0091F74 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall QueryTrueTypeOutlineRequest::CaptureUsermodeParameters(QueryTrueTypeOutlineRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  _OWORD *v4; // rsi
  const void *v5; // r14
  int v6; // edi
  void *v7; // rcx
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  unsigned int *v10; // r14
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned __int64 v13; // r10
  int v14; // eax
  unsigned int v15; // eax
  _OWORD *v16; // rax

  v3 = (struct _FONTOBJ *)a2[1];
  v4 = (_OWORD *)a2[3];
  v5 = (const void *)a2[5];
  v6 = *((_DWORD *)a2 + 12);
  if ( v3 == *((struct _FONTOBJ **)this + 10)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 4), v3)
    && v6 >= 0
    && v5 == *((const void **)this + 12) )
  {
    v7 = (void *)*((_QWORD *)this + 8);
    if ( v7 && v6 > 0 )
    {
      memmove(v7, v5, *((unsigned int *)this + 14));
      v8 = *((_DWORD *)this + 14);
      if ( v6 < v8 )
        v8 = v6;
      v9 = 0;
LABEL_10:
      if ( v9 + 16 >= v9 && v9 + 16 <= v8 )
      {
        v10 = (unsigned int *)(*((_QWORD *)this + 8) + v9);
        v11 = *v10;
        if ( *v10 >= 0x10 && v8 - v9 >= v11 )
        {
          v12 = 16;
          while ( v12 + 12 >= v12 && v11 >= v12 + 12 )
          {
            v13 = 8LL * *(unsigned __int16 *)((char *)v10 + v12 + 2);
            if ( v13 > 0xFFFFFFFF )
            {
              LODWORD(v13) = -1;
              v14 = -2147024362;
            }
            else
            {
              v14 = 0;
            }
            if ( v14 < 0 )
              break;
            v15 = v13 + 4;
            if ( (int)v13 + 4 < (unsigned int)v13 || v11 - v12 < v15 )
              break;
            v12 += v15;
            if ( v12 >= v11 )
            {
              v9 += v11;
              if ( v9 < v8 )
                goto LABEL_10;
              goto LABEL_25;
            }
          }
        }
      }
    }
    else
    {
LABEL_25:
      v16 = (_OWORD *)*((_QWORD *)this + 6);
      if ( v16 )
      {
        if ( v4 != *((_OWORD **)this + 11) )
          return;
        *v16 = *v4;
        v16[1] = v4[1];
        v16[2] = v4[2];
        v16[3] = v4[3];
      }
      else if ( v4 )
      {
        return;
      }
      *((_DWORD *)this + 18) = v6;
    }
  }
}

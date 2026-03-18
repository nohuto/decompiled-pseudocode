/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C001E170 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01DFAFC (bInitBrush.c)
 * Callees:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001E50C (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C001E6B8 (HmgAllocateObjectAttr.c)
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C004DBDC (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 *     HmgFreeObjectAttr @ 0x1C00630B8 (HmgFreeObjectAttr.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v8; // rax
  struct BRUSH *v9; // rsi
  unsigned int v10; // edi
  unsigned int v11; // edi
  char v12; // r13
  struct BRUSH *v13; // rdi
  _QWORD *ObjectAttr; // r15
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  __int64 v20; // [rsp+58h] [rbp-40h] BYREF
  int v21; // [rsp+60h] [rbp-38h]

  *((_DWORD *)this + 2) = 0;
  if ( a3 > 0xC )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v8 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v9 = v8;
    *(_QWORD *)this = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 21) = a2;
      *((_DWORD *)v8 + 6) = a3;
      *((_QWORD *)v8 + 4) = 0LL;
      **((_DWORD **)v8 + 7) = 0;
      if ( a3 < 6 )
      {
        *((_DWORD *)v8 + 12) = 32802;
      }
      else
      {
        v10 = a3 - 6;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v16 = v11 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                v18 = v17 - 1;
                if ( v18 )
                {
                  v19 = v18 - 1;
                  if ( v19 )
                  {
                    if ( v19 == 1 )
                      *((_DWORD *)v8 + 12) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v8 + 12) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v8 + 12) = 18;
                }
              }
              else
              {
                *((_DWORD *)v8 + 12) = 21;
              }
            }
            else
            {
              *((_DWORD *)v8 + 12) = 17;
            }
          }
          else
          {
            *((_DWORD *)v8 + 12) = 20;
          }
        }
        else
        {
          *((_DWORD *)v8 + 12) = 16;
        }
      }
      v12 = 0;
      v13 = 0LL;
      if ( HmgInsertObjectInternal(v8, 3u, 0x10u) )
      {
        v13 = v9;
        if ( a5 )
        {
          ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
          if ( ObjectAttr )
          {
            v20 = 0LL;
            v21 = 0;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v20, *(struct HOBJ__ **)v9, 0x10u);
            if ( v21 )
            {
              *ObjectAttr = *((_QWORD *)v9 + 10);
              *(_QWORD *)(v20 + 16) = ObjectAttr;
              *((_QWORD *)v9 + 7) = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
              if ( v21 )
                HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
            }
          }
        }
      }
      else
      {
        v12 = 1;
        *(_QWORD *)this = 0LL;
      }
      if ( v13 )
        _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
      if ( v12 )
        FreeObject(v9, 16LL);
    }
  }
  return this;
}

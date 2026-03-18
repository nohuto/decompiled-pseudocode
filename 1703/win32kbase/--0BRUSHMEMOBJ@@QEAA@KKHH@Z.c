/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C0059510 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01D8214 (bInitBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0030EA0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003F4EC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     HmgFreeObjectAttr @ 0x1C0058B38 (HmgFreeObjectAttr.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C0059578 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C005997C (HmgAllocateObjectAttr.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  char v16; // r15
  _QWORD *ObjectAttr; // rbx
  _QWORD v19[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  int v22; // [rsp+58h] [rbp-40h]

  *((_DWORD *)this + 2) = 0;
  if ( a3 <= 0xC )
  {
    v8 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v9 = (__int64)v8;
    v19[1] = v8;
    *(_QWORD *)this = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 21) = a2;
      *((_DWORD *)v8 + 6) = a3;
      *((_QWORD *)v8 + 4) = 0LL;
      **((_DWORD **)v8 + 7) = 0;
      if ( a3 >= 6 )
      {
        v10 = a3 - 6;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  v15 = v14 - 1;
                  if ( v15 )
                  {
                    if ( v15 == 1 )
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
      else
      {
        *((_DWORD *)v8 + 12) = 32802;
      }
      v16 = 0;
      v19[0] = 0LL;
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v19, v8, 1, 0, 0x10u) )
      {
        if ( a5 )
        {
          ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
          v19[2] = ObjectAttr;
          if ( ObjectAttr )
          {
            v21 = 0LL;
            v22 = 0;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v21, *(struct HOBJ__ **)v9, 16);
            if ( HANDLELOCK::bValid((HANDLELOCK *)&v21) )
            {
              *ObjectAttr = *(_QWORD *)(v9 + 80);
              *(_QWORD *)(v21 + 16) = ObjectAttr;
              *(_QWORD *)(v9 + 56) = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
            }
            if ( v22 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
          }
        }
      }
      else
      {
        v16 = 1;
        *(_QWORD *)this = 0LL;
      }
      if ( v19[0] )
        _InterlockedDecrement((volatile signed __int32 *)(v19[0] + 12LL));
      if ( v16 )
        FreeObject(v9, 16);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}

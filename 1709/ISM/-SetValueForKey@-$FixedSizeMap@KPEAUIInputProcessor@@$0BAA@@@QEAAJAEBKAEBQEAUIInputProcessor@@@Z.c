/*
 * XREFs of ?SetValueForKey@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKAEBQEAUIInputProcessor@@@Z @ 0x1800075D0
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180006430 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall FixedSizeMap<unsigned long,IInputProcessor *,256>::SetValueForKey(__int64 a1, int *a2, _QWORD *a3)
{
  int v3; // r10d
  unsigned int v4; // ebx
  _DWORD *v5; // r9
  unsigned int v6; // r11d
  int v7; // edi
  int v8; // r9d
  unsigned int v9; // eax
  _DWORD *v10; // rdx
  __int64 v11; // rcx

  v3 = *a2;
  v4 = 0;
  v5 = (_DWORD *)a1;
  v6 = 0;
  LOBYTE(a1) = 0;
  v7 = v5[1024];
  if ( *a2 == v7 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 152;
LABEL_4:
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 1, v8, v4);
    }
  }
  else
  {
    v9 = 0;
    v10 = v5;
    do
    {
      if ( *v10 == v3 )
      {
        *(_QWORD *)&v5[4 * v9 + 2] = *a3;
        return v4;
      }
      if ( !(_BYTE)a1 && *v10 == v7 )
      {
        v6 = v9;
        LOBYTE(a1) = 1;
      }
      ++v9;
      v10 += 4;
    }
    while ( v9 < 0x100 );
    if ( (_BYTE)a1 )
    {
      v11 = 2LL * v6;
      v5[2 * v11] = v3;
      *(_QWORD *)&v5[2 * v11 + 2] = *a3;
      return v4;
    }
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 182;
      goto LABEL_4;
    }
  }
  return v4;
}

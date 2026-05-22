/*
 * XREFs of ?Create@InputServiceComponent@@SAJPEAPEAV1@@Z @ 0x18002E998
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall InputServiceComponent::Create(struct InputServiceComponent **a1)
{
  unsigned int v1; // ebx
  int v3; // r9d
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  _OWORD v9[3]; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = malloc(0x48uLL);
    v5 = v4;
    if ( v4 )
      memset(v4, 0, 0x48uLL);
    if ( v5 )
    {
      v5[2] = &RefCountedObject::`vftable';
      *((_DWORD *)v5 + 6) = 1;
      *v5 = &InputServiceComponent::`vftable'{for `IInputTargetingComponent'};
      v5[1] = &InputServiceComponent::`vftable'{for `IInputTarget'};
      v5[2] = &InputServiceComponent::`vftable'{for `RefCountedObject'};
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      memset(v9, 0, 0x28uLL);
      v6 = v9[1];
      *((_OWORD *)v5 + 2) = v9[0];
      v7 = *(_QWORD *)&v9[2];
      *((_OWORD *)v5 + 3) = v6;
      v5[8] = v7;
      *a1 = (struct InputServiceComponent *)v5;
      return v1;
    }
    v1 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v3 = 40;
      goto LABEL_12;
    }
  }
  else
  {
    v1 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v3 = 37;
LABEL_12:
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v3, v1);
    }
  }
  return v1;
}
